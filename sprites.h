#ifndef __SPRITE_H_INCLUDED__
#define __SPRITE_H_INCLUDED__

#include "types.h"

#define SPRITE_AMOUNT 20

uint16_t scroll_x = 0;
uint16_t scroll_y = 0;

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

typedef struct Sprite {
  uint8_t x;
  uint8_t y;
  uint8_t tile;
} Sprite;

Sprite sprites[SPRITE_AMOUNT];

#define MOVE_LEFT(sprite, amt)  sprite -> x -= amt
#define MOVE_RIGHT(sprite, amt) sprite -> x += amt
#define MOVE_UP(sprite, amt)    sprite -> y -= amt
#define MOVE_DOWN(sprite, amt)  sprite -> y += amt

#define UPDATE_SPRITES \
  for(i = 0; i != SPRITE_AMOUNT; ++i) { \
    set_sprite_tile(i, sprites[i].tile);          \
    move_sprite(i, sprites[i].x, sprites[i].y); \
  }

#endif
