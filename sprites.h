#ifndef __SPRITE_H_INCLUDED__
#define __SPRITE_H_INCLUDED__

#include "types.h"

uint16_t scroll_x = 0;
uint16_t scroll_y = 0;

/*
uint8_t test_sprites[] =
{ B01111110, B01111110, B10000001, B10000001
, B10000001, B10000001, B10000001, B10000001
, B10000001, B10000001, B10000001, B10000001
, B10000001, B10000001, B01111110, B01111110
};
*/

uint8_t test_sprites[] =
{ C(03333330)
, C(33222233)
, C(32211223)
, C(32111123)
, C(32111123)
, C(32211223)
, C(33222233)
, C(03333330)
};

typedef struct Sprites {
  uint8_t x;
  uint8_t y;
  uint8_t idx;
} Sprite;

#endif
