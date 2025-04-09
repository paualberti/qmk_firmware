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

#pragma once

/* HRM */
// yrst
#define MT_T MT(MOD_LGUI, ES_T)
#define MT_S MT(MOD_LALT, ES_S)

#define MT_N MT(MOD_RGUI, KC_N)
#define MT_A MT(MOD_LALT, KC_A)

// Arrows
#define CT_LEFT C(KC_LEFT)
#define CT_RGHT C(KC_RGHT)

/* Layer switching */
#define TO_HOME TO(_HOME)
#define TO_QWTY TO(_QWTY)

// Thumbs
#define LT_SPC LT(_NUM, KC_SPC)
#define MT_TAB MT(MOD_LSFT, KC_TAB)
#define LT_BSPC LT(_SIM, KC_BSPC)
#define MT_ENT MT(MOD_RCTL, KC_ENT)

#define LT_ESC LT(_NAV, KC_ESC)
#define MT_ZERO MT(MOD_RCTL, KC_0)

/* Extras */
#define ES_EUR ALGR(ES_E)
#define S_TAB S(KC_TAB)
