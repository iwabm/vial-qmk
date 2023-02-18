// Copyright 2023 iwabm (@iwabm)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

#define NUMBER_OF_ENCODERS 1
#define ENCODER_RESOLUTION 2
#define ENCODERS_PAD_A { D5 }
#define ENCODERS_PAD_B { D3 }

/* key matrix pins */
#define MATRIX_ROW_PINS { B5, B6, C6, C7 }
#define MATRIX_COL_PINS { F7, F6, F5, F4, F1, F0, E6, B0, B1, B2, D0, D1, D2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
