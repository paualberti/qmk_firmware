/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version. This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details. You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include QMK_KEYBOARD_H

#include "keymap_spanish.h"
#include "layout.h"

/* for >34 key users, replace this line with an include statement for the mask
 * file */
/* example mask files are included for the Lily58 and Corne keyboards for
 * reference */
#include "masks/sweep.h"
// #include "masks/lily58.h"
// #include "masks/crkbd.h"

// enum layer_number { _HOME, _SYM, _HOME, _MAJ, _QWTY, _SIM, _NUM, _GLOB };
enum layer_number { _HOME, _QWTY, _NUM, _SIM, _NAV };

// see https://github.com/ChuseCubr/mini-ryoku for layout details
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_HOME] = LAYOUT_mask(_HOME_LAYOUT),
    [_QWTY] = LAYOUT_mask(_QWTY_LAYOUT),
    [_NUM]  = LAYOUT_mask(_NUM_LAYOUT),
    [_SIM]  = LAYOUT_mask(_SIM_LAYOUT),
    [_NAV]  = LAYOUT_mask(_NAV_LAYOUT),
};
