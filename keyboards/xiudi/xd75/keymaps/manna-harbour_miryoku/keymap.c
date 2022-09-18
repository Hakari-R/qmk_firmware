/* Copyright 2021 weteor
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#pragma once

#include QMK_KEYBOARD_H
void matrix_init_user(){
  rgblight_enable();
  rgblight_mode(1);
}
#define ALTMAP_KCNO ,\
       U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP,\
       U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP,\
       U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP,\
       U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP,\
       U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP, U_NP


#define ALTMAP_L1 ,\
      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_GRV, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, \
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_BSLS, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SCLN, \
      KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_HOME, KC_DEL, KC_PGUP, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_ENT, \
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_END, KC_UP, KC_PGDN, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, \
      KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, RGUI(KC_APP), KC_RCTL
//>>>>>>>>>>>>>>>>>
//mapping def
#define MIRYOKU_MAPPING LAYOUT_miryoku_alt2
#define MIRYOKU_CLIPBOARD_WIN

//use alt layer
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE_ALT,   "Base") \
MIRYOKU_X(EXTRA_ALT,  "Extra") \
MIRYOKU_X(TAP_ALT,    "Tap") \
MIRYOKU_X(BUTTON_ALT, "Button") \
MIRYOKU_X(NAV_ALT,    "Nav") \
MIRYOKU_X(MOUSE_ALT,  "Mouse") \
MIRYOKU_X(MEDIA_ALT,  "Media") \
MIRYOKU_X(NUM_ALT,    "Num") \
MIRYOKU_X(SYM_ALT,    "Sym") \
MIRYOKU_X(FUN_ALT,    "Fun")

//change the layer name for keymapping LT(X)
#if defined (MIRYOKU_LAYER_LIST)
#define U_BASE   U_BASE_ALT
#define U_EXTRA  U_EXTRA_ALT
#define U_TAP    U_TAP_ALT
#define U_BUTTON U_BUTTON_ALT
#define U_NAV    U_NAV_ALT
#define U_MOUSE  U_MOUSE_ALT
#define U_MEDIA  U_MEDIA_ALT
#define U_NUM    U_NUM_ALT
#define U_SYM    U_SYM_ALT
#define U_FUN    U_FUN_ALT
#endif

//redef alt layermapping to default
#define MIRYOKU_LAYERMAPPING_BASE_ALT   MIRYOKU_LAYERMAPPING_BASE
#define MIRYOKU_LAYERMAPPING_EXTRA_ALT  MIRYOKU_LAYERMAPPING_EXTRA
#define MIRYOKU_LAYERMAPPING_TAP_ALT    MIRYOKU_LAYERMAPPING_TAP
#define MIRYOKU_LAYERMAPPING_BUTTON_ALT MIRYOKU_LAYERMAPPING_BUTTON
#define MIRYOKU_LAYERMAPPING_NAV_ALT    MIRYOKU_LAYERMAPPING_NAV
#define MIRYOKU_LAYERMAPPING_MOUSE_ALT  MIRYOKU_LAYERMAPPING_MOUSE
#define MIRYOKU_LAYERMAPPING_MEDIA_ALT  MIRYOKU_LAYERMAPPING_MEDIA
#define MIRYOKU_LAYERMAPPING_NUM_ALT    MIRYOKU_LAYERMAPPING_NUM
#define MIRYOKU_LAYERMAPPING_SYM_ALT    MIRYOKU_LAYERMAPPING_SYM
#define MIRYOKU_LAYERMAPPING_FUN_ALT    MIRYOKU_LAYERMAPPING_FUN

#define MIRYOKU_LAYER_BASE_ALT   MIRYOKU_LAYER_BASE    ALTMAP_L1
#define MIRYOKU_LAYER_EXTRA_ALT  MIRYOKU_LAYER_EXTRA   ALTMAP_L1
#define MIRYOKU_LAYER_TAP_ALT    MIRYOKU_LAYER_TAP     ALTMAP_KCNO
#define MIRYOKU_LAYER_BUTTON_ALT MIRYOKU_LAYER_BUTTON  ALTMAP_KCNO
#define MIRYOKU_LAYER_NAV_ALT    MIRYOKU_LAYER_NAV     ALTMAP_KCNO
#define MIRYOKU_LAYER_MOUSE_ALT  MIRYOKU_LAYER_MOUSE   ALTMAP_KCNO
#define MIRYOKU_LAYER_MEDIA_ALT  MIRYOKU_LAYER_MEDIA   ALTMAP_KCNO
#define MIRYOKU_LAYER_NUM_ALT    MIRYOKU_LAYER_NUM     ALTMAP_KCNO
#define MIRYOKU_LAYER_SYM_ALT    MIRYOKU_LAYER_SYM     ALTMAP_KCNO
#define MIRYOKU_LAYER_FUN_ALT    MIRYOKU_LAYER_FUN     ALTMAP_KCNO
