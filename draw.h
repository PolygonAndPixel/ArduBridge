#ifndef DRAW_H
#define DRAW_H

#include <Arduboy2.h>
#include "variables.h"

/** Calls all the methods needed to draw the game.
 * 
 * \param draw_menu     Draw the menu instead of the bridge if true.
 * */
void draw_game(bool draw_menu);

/** Draw the title.
 * */
void draw_title();

/** Draw the environment such as the ground, trees, stones and water. Might add
 * animated birds and sunset later.
 * */
void draw_environment();

/** Draw all the vehicles driving around.
 * */
void draw_vehicles();

/** Draw the bridge.
 * */
void draw_bridge();

/** Draw the menu where the player can select which part to build.
 * */
void draw_menu();

/** Draw the selection menu where the player can select a level.
 * */
void draw_select_level();

#endif