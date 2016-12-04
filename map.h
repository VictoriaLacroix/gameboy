#ifndef __MAP_H_INCLUDED__
#define __MAP_H_INCLUDED__

typedef struct Tiles {
  uint8_t[16] subtiles;
  uint8_t[4]  collision;
} Tile;

typedef struct Maps {
  uint16_t scroll_x;
  uint16_t scroll_y;
  uint8_t  width;
  uint8_t  height;
  Tile*    tiles;
} Map;

#endif
