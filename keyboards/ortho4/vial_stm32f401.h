/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, 	\
		k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, 	\
			k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210,		\
		k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311,	\
	k40, k41, k42, 						k46, 		k410, k411, k412 	\
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012 }, \
    { KC_NO, k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111 },  \
	{ KC_NO, KC_NO, k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210 }, \
	{ KC_NO, k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k310, k311 },  \
	{ k40, k41, k42, KC_NO, KC_NO, KC_NO, k46, KC_NO, KC_NO, KC_NO, k410, k411, k412  }  \
}
