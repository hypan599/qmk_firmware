// Copyright 2024 hypan599 (@hypan599)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

// #define LAYOUT_all LAYOUT_default
// KLE:
// [{x:0.5},"0,0","0,1","0,2","0,3","0,4","0,5",{x:6.5},"0,6","0,7","0,8","0,9","0,10","0,11"],
// [{x:0.5},"1,0","1,1","1,2","1,3","1,4","1,5",{x:6.5},"1,6","1,7","1,8","1,9","1,10","1,11"],
// [{x:0.5},"2,0","2,1","2,2","2,3","2,4","2,5",{x:6.5},"2,6","2,7","2,8","2,9","2,10","2,11"],
// [{x:0.5},"3,0","3,1","3,2","3,3","3,4","3,5",{x:6.5},"3,6","3,7","3,8","3,9","3,10","3,11"],
// [{x:1.5},"4,1","4,2","4,3","4,4","4,5","4,0",{x:4.5},"4,11","4,6","4,7","4,8","4,9","4,10"]
