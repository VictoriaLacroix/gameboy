#include <gb/gb.h>
#include <stdlib.h>
#include <stdio.h>

#include "types.h"
#include "joypad.h"
#include "sprites.h"

// Header
void init();
void game();
int  main();

// Functions
uint8_t x = 80;
uint8_t y = 80;

void init() {
  joy[0] = 0x00;
  joy[1] = 0x00;
  set_sprite_data(0, 1, test_sprites);
  set_sprite_tile(0, false);
  move_sprite(0, x, y);
  SHOW_SPRITES;
}

// Frame-by-frame game logic.
void game() {
  x = IS_PRESSED(J_LEFT)  ? x - 8: x;
  x = IS_PRESSED(J_RIGHT) ? x + 8: x;
  y = IS_PRESSED(J_UP)    ? y - 8: y;
  y = IS_PRESSED(J_DOWN)  ? y + 8: y;
  move_sprite(0, x, y);
}

int main() {
  init();
  while(true) {
    joy[0] = joypad();
    game();
    joy[1] = joy[0];
    delay(16);
  }
}
