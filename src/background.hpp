#pragma once
#include <Arduboy2.h>
#include <stdint.h>
#include "common.hpp"

class Background {
  public:
    uint8_t ticker;
    int8_t x[15];
    uint8_t y[15];

    void init() {
        for (uint8_t i = 0; i < 15; i++) {
            x[i] = rand() % 128;
            y[i] = rand() % 60;
        }
    };

    void tick() {
        ticker++;
        if (ticker == 61) {
            ticker = 0;
        }

        if (ticker % 40 == 0) {
            for (uint8_t i = 0; i < 5; i++) {
                x[i]--;
                if (x[i] < -5) {
                    x[i] = rand() % 5 + 124;
                    y[i] = rand() % 60;
                }
            }
        }
        if (ticker % 15 == 0) {
            for (uint8_t i = 5; i < 10; i++) {
                x[i] -= 1;
                if (x[i] < -5) {
                    x[i] = rand() % 5 + 124;
                    y[i] = rand() % 60;
                }
            }
        }
        if (ticker % 5 == 0) {

            for (uint8_t i = 10; i < 15; i++) {
                x[i] -= 2;
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