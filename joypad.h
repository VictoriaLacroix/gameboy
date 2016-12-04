#ifndef __JOYPAD_H_INCLUDED__
#define __JOYPAD_H_INCLUDED__

#include "types.h"

//Holds current and last joypad states.
uint8_t joy[2];
#define IS_PRESSED(x)  joy[0] & x && !(joy[1] & x)
#define IS_RELEASED(x) !(joy[0] & x) && joy[1] & x
#define IS_DOWN(x)     joy[0] & x

#endif
