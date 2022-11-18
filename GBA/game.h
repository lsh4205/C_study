#ifndef GAME_H
#define GAME_H

#include "gba.h"

                    /* TODO: */

            // Create any necessary structs //

/*
* For example, for a Snake game, one could be:
*
* typedef struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* } Snake;
*/
struct square {
	int row;
	int col;
	u16 color;
};

struct unit {
	// 0 is the close left
	// 1 is the farthest left
	// 2 is the close up
	// 3 is the farthest up
	// 4 is the close right
	// 5 is the farthest right
	// 6 is the close down
	// 7 is the farthest down

	struct square core;
	struct square adj[8];
};

/* 
*
* Example of a struct to hold state machine data:
* 
* typedef struct state {
*   int currentState;
*   int nextState;
* } State
*
*/
struct state {
  int size;
  struct unit unit;
} cs, ps;


#endif
