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

#include "keycodes.h"

#pragma once

/* Layout */

// clang-format off
#define _HOME_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | P       | L       | W       | M       | Q       |    | Z       | F       | O       | U       | '       |   */\
       ES_P    , ES_L    , ES_W    , ES_M    , ES_Q    ,      ES_Z    , ES_F    , ES_O    , ES_U    , ES_QUOT ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Y       | R       | S       | T       | K       |    | J       | N       | A       | E       | I       |   */\
       ES_Y    , ES_R    , MT_S    , MT_T    , ES_K    ,      ES_J    , MT_N    , MT_A    , ES_E    , ES_I    ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Z       | X       | C       | D       | V       |    | K       | H       | ,       | ;       | .       |   */\
       ES_G    , ES_X    , ES_C    , ES_D    , ES_V    ,      ES_B    , ES_H    , ES_COMM , ES_SCLN , ES_DOT  ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     LT_SPC  , MT_TAB  ,      MT_ENT  , LT_BSPC
/*                                 `-------------------'    `-------------------'                                 */

#define _QWTY_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | Q       | W       | E       | R       | T       |    | Y       | U       | I       | O       | P       |   */\
       ES_Q    , ES_W    , ES_E    , ES_R    , ES_T    ,      ES_Y    , ES_U    , ES_I    , ES_O    , ES_P    ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | A       | S       | D       | F       | G       |    | H       | J       | K       | L       | Ñ       |   */\
       ES_A    , ES_S    , ES_D    , ES_F    , ES_G    ,      ES_H    , ES_J    , ES_K    , ES_L    , ES_NTIL ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Z       | X       | C       | V       | B       |    | N       | M       | , ;     | . :     | - _     |   */\
       ES_Z    , ES_X    , ES_C    , ES_V    , ES_B    ,      ES_N    , ES_M    , ES_COMM , ES_DOT  , ES_MINS ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     LT_SPC  , MT_TAB  ,      MT_ENT  , LT_BSPC
/*                                 `-------------------'    `-------------------'                                 */

#define _NUM_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | DEL     | ·       | Ç       | Ñ       | /       |    | -       | 7       | 8       | 9       | "       |   */\
       KC_DEL  , ES_BULT , ES_CCED , ES_NTIL , ES_SLSH ,      ES_MINS , KC_7    , KC_8    , KC_9    , ES_DQUO ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         | ¨       | `       | ´       | *       |    | +       | 4       | 5       | 6       | 0       |   */\
       KC_NO   , ES_DIAE , ES_GRV  , ES_ACUT , ES_ASTR ,      ES_PLUS , KC_4    , KC_5    , KC_6    , KC_0    ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | (       | )       | ¿       | ¡       |         |    |         | 1       | 2       | 3       |         |   */\
       ES_LPRN , ES_RPRN , ES_IQUE , ES_IEXL , KC_NO   ,      KC_NO   , KC_1    , KC_2    , KC_3    , KC_DOT  ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     KC_NO   , KC_NO   ,      MT_ENT  , LT_ESC
/*                                 `-------------------'    `-------------------'                                 */

#define _SIM_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | €       | @       | #       | $       | %       |    | ^       | &       | *       | !       | "       |   */\
       ES_EUR  , ES_AT   , ES_HASH , ES_DLR  , ES_PERC ,      ES_CIRC , ES_AMPR , ES_ASTR , ES_EXLM , ES_DQUO ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | ?       | =       | _       | -       | +       |    | \       | (       | )       | |       | DEL     |   */\
       ES_QUES , ES_EQL  , ES_UNDS , ES_MINS , ES_PLUS ,      ES_BSLS , ES_LPRN , ES_RPRN , ES_PIPE , KC_DEL  ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | LCTL    | /       | <       | >       | ~       |    | [       | {       | }       | ]       | :       |   */\
       KC_LCTL , ES_SLSH , ES_LABK , ES_RABK , ES_TILD ,      ES_LBRC , ES_LCBR , ES_RCBR , ES_RBRC , ES_COLN ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     LT_ESC  , S_TAB   ,      KC_NO   , KC_NO
/*                                 `-------------------'    `-------------------'                                 */

#define _NAV_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | PSCR    | RGHT    | CT_RGHT | END     | BOOT    |    | BOOT    | FIND    |         | PGUP    | VOLU    |   */\
       KC_PSCR , KC_RGHT , CT_RGHT , KC_END  , QK_BOOT ,      QK_BOOT , KC_FIND , KC_NO   , KC_PGUP , KC_VOLU ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         |         | HOME    |         | UP      |    | DOWN    |         | WBAK    | WFWD    | VOLD    |   */\
       KC_NO   , KC_NO   , KC_HOME , KC_NO   , KC_UP   ,      KC_DOWN , KC_NO   , KC_WBAK , KC_WFWD , KC_VOLD ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         |         |         | PGDN    |         |    | CT_LEFT | LEFT    |         |         |         |   */\
       TO_QWTY , KC_NO   , KC_NO   , KC_PGDN , KC_NO   ,      CT_LEFT , KC_LEFT , KC_NO   , KC_NO   , TO_HOME ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     KC_NO   , KC_NO   ,      KC_NO   , KC_NO
/*                                 `-------------------'    `-------------------'                                 */

