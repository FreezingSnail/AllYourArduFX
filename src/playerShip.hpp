#pragma once
#include "common.hpp"
#include "bounds.hpp"
#include "bullet.hpp"

class PlayerShip {
  public:
    uint8_t lives;
    uint8_t invincible;
    uint8_t invincibleTimer;
    uint8_t invincibleBlink;
    uint8_t x, y;

    Bullet bullets[PLAYER_BULLETS];

    PlayerShip();
    void move(int8_t deltaX, int8_t deltaY);
    void tick();
    void draw();
    Bounds bound();
    bool collide(Bounds other);
    void shoot();
};