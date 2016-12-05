#include <gb/gb.h>
#include <stdlib.h>
#include <stdio.h>

#include "types.h"
#include "binary.h"
#include "joypad.h"
#include "sprites.h"

// Header
void init(void);
void game(void);
void main(void);

Sprite* ball = &sprites[0];

//for starters
void init() {
  joy[0] = 0x00;
  joy[1] = 0x00;
  set_sprite_data(0, 1, test_sprites);

  ball -> x    = 80;
  ball -> y    = 80;
  ball -> tile = 0;

  UPDATE_SPRITES;
  SHOW_SPRITES;
}

// Frame-by-frame game logic.
void game() {
  if(IS_DOWN(J_LEFT))
    MOVE_LEFT(ball, 8);

  if(IS_DOWN(J_RIGHT))
    MOVE_RIGHT(ball, 8);

  if(IS_DOWN(J_UP))
    MOVE_UP(ball, 8);

  if(IS_DOWN(J_DOWN))
    MOVE_DOWN(ball, 8);
}

void main() {
  init();
  while(true) {
    joy[0] = joypad();
    game();
    UPDATE_SPRITES;
    joy[1] = joy[0];
    wait_vbl_done();
  }
}

