#include "playerShip.hpp"

PlayerShip::PlayerShip() {

    x = 0;
    y = 0;
    lives = 3;
    invincible = 0;
    invincibleTimer = 0;
    invincibleBlink = 0;
}

void PlayerShip::move(int8_t deltaX, int8_t deltaY) {
    x += deltaX;
    y += deltaY;
}

void PlayerShip::tick() {
    if (invincible) {
        invincibleTimer++;
        if (invincibleTimer > 120) {
            invincible = 0;
            invincibleTimer = 0;
        }
        invincibleBlink++;
        if (invincibleBlink > 4) {
            invincibleBlink = 0;
        }
    }

    for (uint8_t i = 0; i < PLAYER_BULLETS; i++) {
        bullets[i].tick();
    }
}

void PlayerShip::draw() {
    if (invincible && invincibleBlink < 2) {
        return;
    }
    SpritesU::drawPlusMaskFX(x, y, MAINSHIP_IMG, FRAME(ticker % 8 % 2));
}

Bounds PlayerShip::bound() {
    return Bounds(x, y, 16, 16);
}

bool PlayerShip::collide(Bounds other) {
    if (invincible) {
        return false;
    }
    return bound().checkCollision(other);
}

void PlayerShip::shoot() {
    for (uint8_t i = 0; i < PLAYER_BULLETS; i++) {
        if (!bullets[i].active) {
            bullets[i].start(x + 8, y + 8, BulletType::LINE, 1, 0);
            return;
        }
    }
}