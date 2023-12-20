#pragma once
#include "fxdata/fxdata.h"
#include <Arduboy2.h>
#include <ArduboyFX.h>
#include <stdint.h>
#include "common.hpp"

class Explosion {
  public:
    uint8_t x, y, ticker, frame;
    const uint8_t *sprite;
    uint8_t size;
    bool active;

    void spawn(uint8_t x, uint8_t y, uint8_t size) {
        active = true;
        this->x = x;
        this->y = y;
        this->size = size;
        frame = 0;
        ticker = 0;
        switch (size) {
        case 8:
            sprite = EXPLOSION_IMG;
            break;
        case 16:
            sprite = MIDEXPLOSION_IMG;
            break;
        }
    }

    void tick() {
        if (!active) {
            return;
        }
        ticker++;
        if (ticker % 5 == 0) {
            frame++;
        }
        switch (size) {
        case 8:
            if (frame == 6) {
                active = false;
                return;
            }
        case 16:
            if (frame == 8) {
                active = false;
                return;
            }
        }

        SpritesU::drawOverwriteFX(x, y, sprite, a.currentPlane());
        // FX::drawBitmap(x, y, sprite, frame, dbmMasked);
    };
};