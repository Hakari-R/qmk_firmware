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
#define RGBLIGHT_SLEEP

#define XXX KC_NO

#define LAYOUT_miryoku( \
       K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09, \
       K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19, \
       K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29, \
       N30,   N31,   K32,   K33,   K34,   K35,   K36,   K37,   N38,   N39 \
) { \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, K00, K01, K02, K03, K04, XXX, XXX, XXX, K05, K06, K07, K08, K09, XXX }, \
    { XXX, K10, K11, K12, K13, K14, XXX, XXX, XXX, K15, K16, K17, K18, K19, XXX }, \
    { XXX, K20, K21, K22, K23, K24, XXX, XXX, XXX, K25, K26, K27, K28, K29, XXX }, \
    { XXX, XXX, XXX, K32, K33, K34, XXX, XXX, XXX, K35, K36, K37, XXX, XXX, XXX }  \
}

#define LAYOUT_miryoku_alt( \
            K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
            K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
            K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
            N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39  \
       ,\
       D00, D01, D02, D03, D04, D05, D06, D07, D08, D09, D0A, D0B, D0C, D0D, D0E,\
       D10,                          D16, D17, D18,                          D1E,\
       D20,                          D26, D27, D28,                          D2E,\
       D30,                          D36, D37, D38,                          D3E,\
       D40, D41, D42,                D46, D47, D48,                D4C, D4D, D4E \
) { \
    { D00, D01, D02, D03, D04, D05, D06, D07, D08, D09, D0A, D0B, D0C, D0D, D0E }, \
    { D10, K00, K01, K02, K03, K04, D16, D17, D18, K05, K06, K07, K08, K09, D1E }, \
    { D20, K10, K11, K12, K13, K14, D26, D27, D28, K15, K16, K17, K18, K19, D2E }, \
    { D30, K20, K21, K22, K23, K24, D36, D37, D38, K25, K26, K27, K28, K29, D3E }, \
    { D40, D41, D42, K32, K33, K34, D46, D47, D48, K35, K36, K37, D4C, D4D, D4E }  \
}

#define LAYOUT_miryoku_alt2( \
            K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
            K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
            K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
            N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39  \
       ,\
       D00, D01, D02, D03, D04, D05, D06, D07, D08, D09, D0A, D0B, D0C, D0D, D0E,\
       D10, D11, D12, D13, D14, D15, D16, D17, D18, D19, D1A, D1B, D1C, D1D, D1E,\
       D20, D21, D22, D23, D24, D25, D26, D27, D28, D29, D2A, D2B, D2C, D2D, D2E,\
       D30, D31, D32, D33, D34, D35, D36, D37, D38, D39, D3A, D3B, D3C, D3D, D3E,\
       D40, D41, D42, D43, D44, D45, D46, D47, D48, D49, D4A, D4B, D4C, D4D, D4E \
) { \
    { D00, D01, D02, D03, D04, D05, D06, D07, D08, D09, D0A, D0B, D0C, D0D, D0E }, \
    { D10, K00, K01, K02, K03, K04, D16, D17, D18, K05, K06, K07, K08, K09, D1E }, \
    { D20, K10, K11, K12, K13, K14, D26, D27, D28, K15, K16, K17, K18, K19, D2E }, \
    { D30, K20, K21, K22, K23, K24, D36, D37, D38, K25, K26, K27, K28, K29, D3E }, \
    { D40, D41, D42, K32, K33, K34, D46, D47, D48, K35, K36, K37, D4C, D4D, D4E }  \
}
