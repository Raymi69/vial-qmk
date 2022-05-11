/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEDD
#define PRODUCT_ID      0x1504
#define DEVICE_VER      0x0001
#define MANUFACTURER    Raym
#define PRODUCT         Ortho3

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

#define MATRIX_ROW_PINS { A8, B15, B14, B13, B12 }
#define MATRIX_COL_PINS { C15, A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, B2, B10 }

#define DIODE_DIRECTION COL2ROW


#define ENCODERS_PAD_A { C14 }
#define ENCODERS_PAD_B { C13 }

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1


#define RGB_DI_PIN B9
#define RGBLED_NUM 30
#define RGBLIGHT_ANIMATIONS
#define WS2812_TRST_US 80

#define DEBOUNCE 5