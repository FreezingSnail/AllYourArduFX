#pragma once
#include <stdint.h>

#define ABG_TIMER1
#define ABG_SYNC_PARK_ROW

#include "external/ArduboyG.h"
#include "state.h"
extern ArduboyGBase_Config<ABG_Mode::L4_Triplane> a;

#define SPRITESU_RECT
#define SPRITESU_FX
#define SPRITESU_RECT
#include "external/SpritesU.hpp"

#define PLAYER_BULLETS 9

#define FRAME(f) ((f * 3) + a.currentPlane())

#include "fxdata/fxdata.h"

extern uint8_t ox;
extern uint8_t oy;
extern uint16_t ticker;

extern State state;