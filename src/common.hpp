#pragma once

#define ABG_TIMER1
#define ABG_SYNC_PARK_ROW

#include "external/ArduboyG.h"
extern ArduboyGBase_Config<ABG_Mode::L4_Triplane> a;

#define SPRITESU_RECT
#define SPRITESU_FX
#include "external/SpritesU.hpp"

extern uint8_t ox;
extern uint8_t oy;