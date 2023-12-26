#include <Arduino.h>
#include <Arduboy2.h>
#include <ATMlib.h>
#include <ArduboyFX.h>
#define ABG_IMPLEMENTATION
#define SPRITESU_IMPLEMENTATION

#include "src/common.hpp"
#include "src/fxdata/fxdata.h"
#include "song.h"
#include "src/background.hpp"

#include "src/explosion.hpp"
#include "src/playerShip.hpp"

decltype(a) a;

ATMsynth ATM;
Explosion explosions[8];
Background background;
uint16_t frame, ticker;
State state;

static bool dir;
uint8_t ox;
uint8_t oy;
// struct atm_sfx_state sfx_state;

PlayerShip player;

void setup() {
    a.boot();
    a.startGray();
    // let's make sure the sound was not muted in a previous sketch
    a.audio.on();

    FX::begin(FX_DATA_PAGE);
    //  FX::setFont(arduboyFont, dcmNormal);   // select default font
    FX::setCursorRange(0, 32767);

    // Begin playback of song.
    atm_synth_setup();
    atm_synth_play_score((const uint8_t *)&squarez);

    background.init();
    ticker = 0;
    frame = 0;

    state = GAME;
}

void update() {
    uint8_t b = a.buttonsState();
    if (ox > 0 && (b & LEFT_BUTTON)) {
        --ox;
        player.move(-1, 0);
        // player.x = ox;
    }
    if (oy > 0 && (b & UP_BUTTON)) {
        --oy;
        player.move(0, -1);
        // player.y = oy;
    }
    if (ox < 128 && (b & RIGHT_BUTTON)) {
        ++ox;
        player.move(1, 0);
        // player.x = ox;
    }
    if (oy < 64 && (b & DOWN_BUTTON)) {
        ++oy;
        player.move(0, 1);
        // player.y = oy;
    }

    if (b & A_BUTTON) {
        state = GAME;
    }

    if (a.justPressed(A_BUTTON)) {
        player.shoot();
    }
}

void spawnTitleSplode(uint8_t x, uint8_t y) {
    for (uint8_t i = 0; i < 8; i++) {
        if (!explosions[i].active) {
            explosions[i].spawn(x, y, 8);
            return;
        }
    }
}

void intro() {

    for (uint8_t i = 0; i < 8; i++) {
        explosions[i].tick();
    }

    if (ticker == 60) {
        spawnTitleSplode(20, 10);
    } else if (ticker == 70) {
        spawnTitleSplode(60, 50);
    } else if (ticker == 90) {
        spawnTitleSplode(40, 40);
    } else if (ticker == 105) {
        spawnTitleSplode(80, 35);
    } else if (ticker == 125) {
        spawnTitleSplode(35, 12);
    } else if (ticker == 130) {
        spawnTitleSplode(885, 45);
    } else if (ticker == 132) {
        spawnTitleSplode(49, 20);
    }

    if (ticker == 300) {
    }
}

void loop() {

    FX::enableOLED();
    a.waitForNextPlane();
    FX::disableOLED();

    background.tick();
    if (a.needsUpdate()) {
        ticker++;
        if (ticker % 10 == 0) {
            frame++;
        }

        update();
    }
    if (atm_synth_is_score_stopped()) {
        atm_synth_play_score((const uint8_t *)&squarez);
    }

    switch (state) {
    case INTRO:
        intro();
        SpritesU::drawPlusMaskFX(20, 0, TITLESHIP2_IMG, a.currentPlane());

        break;
    case TITLE:
        break;
    case GAME:
        player.tick();
        player.draw();

        break;
    case LEVEL_SELECT:
        break;
    case MENU:
        break;
    }
}
