#pragma once
#include <Arduboy2.h>
#include <stdint.h>
#include "common.hpp"

class Background {
  public:
    int8_t x[15];
    uint8_t y[15];

    void init() {
        for (uint8_t i = 0; i < 15; i++) {
            x[i] = rand() % 128;
            y[i] = rand() % 60;
        }
    };

    void tick() {
        if (ticker % 40 == 0) {
            for (uint8_t i = 0; i < 5; i++) {
                x[i]--;
                if (x[i] < -5) {
                    x[i] = rand() % 5 + 124;
                    y[i] = rand() % 60;
                }
            }
        }
        if (ticker % 30 == 0) {
            for (uint8_t i = 5; i < 10; i++) {
                x[i] -= 1;
                if (x[i] < -5) {
                    x[i] = rand() % 5 + 124;
                    y[i] = rand() % 60;
                }
            }
        }
        if (ticker % 4 == 0) {

            for (uint8_t i = 10; i < 15; i++) {
                x[i] -= 1;
                if (x[i] < -5) {
                    x[i] = rand() % 5 + 124;
                    y[i] = rand() % 60;
                }
            }
        }

        for (uint8_t i = 0; i < 5; i++) {
            SpritesU::fillRect(x[i], y[i], 1, 1, WHITE);
        }
        for (uint8_t i = 5; i < 10; i++) {
            SpritesU::fillRect(x[i], y[i], 2, 1, WHITE);
        }
        for (uint8_t i = 10; i < 15; i++) {
            SpritesU::fillRect(x[i], y[i], 2, 1, WHITE);
            SpritesU::fillRect(x[i], y[i] + 1, 1, 1, WHITE);
        }
    };
};