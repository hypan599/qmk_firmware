// Copyright 2024 hypan599 (@hypan599)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define USE_SERIAL
#define SOFT_SERIAL_PIN D1
#define EE_HANDS

/*
#define LAYOUT_spky( \
    L00, L01, L02, L03, L04, L05, L06, L07,     R00, R01, R02, R03, R04, R05, R06, R07,  \
        L10, L11, L12, L13, L14, L15, L16,        R10, R11, R12, R13, R14, R15, R16,     \
        L20, L21, L22, L23, L24, L25, L26,        R20, R21, R22, R23, R24, R25, R26,     \
    L30, L31, L32, L33, L34, L35, L36, L37,     R30, R31, R32, R33, R34, R35, R36, R37,  \
    L40, L41, L42, L43, L44, L45, L46, L47,     R40, R41, R42, R43, R44, R45, R46, R47   \
) { \
    { L00,   L01, L02, L03, L04, L05, L06, L07 }, \
    { L10,   L11, L12, L13, L14, L15, L16, KC_NO }, \
    { KC_NO, L21, L22, L23, L24, L25, L26, L27 }, \
    { L30,   L31, L32, L33, L34, L35, L36, L37 }, \
    { L40,   L41, L42, L43, L44, L45, L46, L47 }, \
    { R00,   R01, R02, R03, R04, R05, R06, R07 }, \
    { R10,   R11, R12, R13, R14, R15, R16, KC_NO }, \
    { KC_NO, R21, R22, R23, R24, R25, R26, R27 }, \
    { R30,   R31, R32, R33, R34, R35, R36, R37 }, \
    { R40,   R41, R42, R43, R44, R45, R46, R47 } \
}
*/


/*
    "layouts": {
        "LAYOUT_spky": {
            "layout": [
                {"matrix": [0, 0], "x": 0, "y": 1},
                {"matrix": [0, 1], "x": 1, "y": 1},
                {"matrix": [0, 2], "x": 2, "y": 1},
                {"matrix": [0, 3], "x": 3, "y": 1},
                {"matrix": [0, 4], "x": 4, "y": 1},
                {"matrix": [0, 5], "x": 5, "y": 1},
                {"matrix": [0, 6], "x": 6, "y": 1},
                {"matrix": [0, 7], "x": 7, "y": 1},

                {"matrix": [1, 0], "x": 0, "y": 2},
                {"matrix": [1, 1], "x": 1, "y": 2},
                {"matrix": [1, 2], "x": 2, "y": 2},
                {"matrix": [1, 3], "x": 3, "y": 2},
                {"matrix": [1, 4], "x": 4, "y": 2},
                {"matrix": [1, 5], "x": 5, "y": 2},
                {"matrix": [1, 6], "x": 6, "y": 2},
                {"matrix": [1, 7], "x": 7, "y": 2},

                {"matrix": [2, 0], "x": 0, "y": 3},
                {"matrix": [2, 1], "x": 1, "y": 3},
                {"matrix": [2, 2], "x": 2, "y": 3},
                {"matrix": [2, 3], "x": 3, "y": 3},
                {"matrix": [2, 4], "x": 4, "y": 3},
                {"matrix": [2, 5], "x": 5, "y": 3},
                {"matrix": [2, 6], "x": 6, "y": 3},
                {"matrix": [2, 7], "x": 7, "y": 3},

                {"matrix": [3, 0], "x": 0, "y": 4},
                {"matrix": [3, 1], "x": 1, "y": 4},
                {"matrix": [3, 2], "x": 2, "y": 4},
                {"matrix": [3, 3], "x": 3, "y": 4},
                {"matrix": [3, 4], "x": 4, "y": 4},
                {"matrix": [3, 5], "x": 5, "y": 4},
                {"matrix": [3, 6], "x": 6, "y": 4},
                {"matrix": [3, 7], "x": 7, "y": 4},

                {"matrix": [4, 0], "x": 0, "y": 5},
                {"matrix": [4, 1], "x": 1, "y": 5},
                {"matrix": [4, 2], "x": 2, "y": 5},
                {"matrix": [4, 3], "x": 3, "y": 5},
                {"matrix": [4, 4], "x": 4, "y": 5},
                {"matrix": [4, 5], "x": 5, "y": 5},
                {"matrix": [4, 6], "x": 6, "y": 5},
                {"matrix": [4, 7], "x": 7, "y": 5},


                {"matrix": [5, 0], "x": 10, "y": 1},
                {"matrix": [5, 1], "x": 11, "y": 1},
                {"matrix": [5, 2], "x": 12, "y": 1},
                {"matrix": [5, 3], "x": 13, "y": 1},
                {"matrix": [5, 4], "x": 14, "y": 1},
                {"matrix": [5, 5], "x": 15, "y": 1},
                {"matrix": [5, 6], "x": 16, "y": 1},
                {"matrix": [5, 7], "x": 17, "y": 1},

                {"matrix": [6, 0], "x": 10, "y": 2},
                {"matrix": [6, 1], "x": 11, "y": 2},
                {"matrix": [6, 2], "x": 12, "y": 2},
                {"matrix": [6, 3], "x": 13, "y": 2},
                {"matrix": [6, 4], "x": 14, "y": 2},
                {"matrix": [6, 5], "x": 15, "y": 2},
                {"matrix": [6, 6], "x": 16, "y": 2},
                {"matrix": [6, 7], "x": 17, "y": 2},

                {"matrix": [7, 0], "x": 10, "y": 3},
                {"matrix": [7, 1], "x": 11, "y": 3},
                {"matrix": [7, 2], "x": 12, "y": 3},
                {"matrix": [7, 3], "x": 13, "y": 3},
                {"matrix": [7, 4], "x": 14, "y": 3},
                {"matrix": [7, 5], "x": 15, "y": 3},
                {"matrix": [7, 6], "x": 16, "y": 3},
                {"matrix": [7, 7], "x": 17, "y": 3},

                {"matrix": [8, 0], "x": 10, "y": 4},
                {"matrix": [8, 1], "x": 11, "y": 4},
                {"matrix": [8, 2], "x": 12, "y": 4},
                {"matrix": [8, 3], "x": 13, "y": 4},
                {"matrix": [8, 4], "x": 14, "y": 4},
                {"matrix": [8, 5], "x": 15, "y": 4},
                {"matrix": [8, 6], "x": 16, "y": 4},
                {"matrix": [8, 7], "x": 17, "y": 4},

                {"matrix": [9, 0], "x": 10, "y": 5},
                {"matrix": [9, 1], "x": 11, "y": 5},
                {"matrix": [9, 2], "x": 12, "y": 5},
                {"matrix": [9, 3], "x": 13, "y": 5},
                {"matrix": [9, 4], "x": 14, "y": 5},
                {"matrix": [9, 5], "x": 15, "y": 5},
                {"matrix": [9, 6], "x": 16, "y": 5},
                {"matrix": [9, 7], "x": 17, "y": 5}

            ]
        }
    }
*/