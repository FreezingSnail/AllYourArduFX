#pragma once
#include "bounds.hpp"
#include "lib/paths.hpp"

enum class BulletType {
    DOT,
    LINE,
    CIRCLE,
    TRIANGLE,
};

class Bullet {
  public:
    uint8_t x, y;
    bool active;
    BulletType type;
    uint8_t stepCount, stepPointer;
    int8_t xMod, yMod;
    bool enemy;

    void draw();
    void tick();
    void start(uint8_t x, uint8_t y, BulletType type, int8_t xMod, int8_t yMod);
    void start(uint8_t x, uint8_t y, BulletType type, int8_t xMod, int8_t yMod, bool enemy);
    void reset();
    Bounds getBounding();
    void move();
    void applyPath(Path p);
    uint8_t getDamage();
};