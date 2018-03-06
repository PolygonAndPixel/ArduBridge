/*
 * ArduBridge
 * Copyright (C) 2015
 * Maicon Hieronymus <mhierony@students.uni-mainz.de>
 * All rights reserved.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 * -----------------------------------------------------------------------------
 *
 * @file        ArduBridge.ino
 * @date        06.03.2018
 * @version     0.1
 * @author      Maicon Hieronymus <mhierony@students.uni-mainz.de>
 *
 * @brief This is a game for the [Arduboy](https://arduboy.com/).
 * You have to build bridges in different environments which need to survive
 * sustain several cars and trucks.
 */

#include <Arduboy2.h>

#include "bridge.h"
#include "variables.h"

Arduboy2 arduboy;
byte frame_counter;
Bridge bridge;
bool game_started = false;
bool finished_build = false;
unsigned int unlocked_levels = 0;
byte current_level = 0;

/*
 * @brief Checks if EEPROM is initialised. See 
 * https://github.com/filmote/Steve/blob/master/EEPROMUtils.h
 */
void initEEPROM() {
    byte c1 = EEPROM.read(EEPROM_START_C1);
    byte c2 = EEPROM.read(EEPROM_START_C2);
    // I just take two numbers in front of the actual highscore to check, if 
    // it is a highscore from my game.
    if(c1 != 12 || c2 != 99) {
        EEPROM.update(EEPROM_START_C1, 12);
        EEPROM.update(EEPROM_START_C2, 99);
        EEPROM.put(EEPROM_SCORE, unlocked_levels);
    }
    EEPROM.get(EEPROM_SCORE, unlocked_levels);
}

void setup() {
    initEEPROM();
    arduboy.begin();
    arduboy.setFrameRate(60);
    arduboy.initRandomSeed();
}

void loop() {
    // No rendering needed until the next frame is needed. Duh!
    if(!(arduboy.nextFrame()))
        return;
    if(game_started) {
        // Check if player is ready or is still constructing
        if(finished_build) {
            // Let the trucks and so on come
        } else {
            // Let the player build
        }
    } else {
        draw_title();
        game_started = true;
        init_level(current_level);
    }
}