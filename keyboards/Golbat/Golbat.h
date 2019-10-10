/* Copyright 2019
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
#pragma once

#include "quantum.h"
#define ___ KC_NO

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define Golbat_V1( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19,      K1b, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b, \
    K30, K31, K32,      K34,           K37,      K39, K3a, K3b \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, ___, K1b }, \
    { K20, ___, K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b }, \
    { K30, K31, K32, ___, K34, ___, ___, K37, ___, K39, K3a, K3b } \
}
