#pragma once
#include "common.hpp"
#include <stdint.h>

class Bounds {
  public:
    uint8_t x, y;            // Position in pixels
    uint8_t width, height;   // Size of the object

    Bounds(uint8_t x, uint8_t y, uint8_t width, uint8_t height) : x(x), y(y), width(width), height(height) {
    }

    bool checkCollision(const Bounds &other) const {
        // Check for collision using Axis-Aligned Bounding Box (AABB) method
        return x < other.x + other.width && x + width > other.x && y < other.y + other.height && y + height > other.y;
    }

    void draw() {
        SpritesU::fillRect(x, y, width, 1, WHITE);
        SpritesU::fillRect(x, y, 1, height, WHITE);
        SpritesU::fillRect(x, y + height, width, 1, WHITE);
        SpritesU::fillRect(x + width, y, 1, height, WHITE);
    }
};