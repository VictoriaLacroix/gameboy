#ifndef __MAP_H_INCLUDED__
#define __MAP_H_INCLUDED__

#include "types.h"

// Pokemon RBY/GSC-style
typedef struct Tile {
  uint8_t[16] subtiles;
  uint8_t[4]  collision;
} Tile;

typedef struct Map {
  uint16_t scroll_x;
  uint16_t scroll_y;
  uint8_t  width;
  uint8_t  height;
  Tile*    tiles;
} Map;

#endif
