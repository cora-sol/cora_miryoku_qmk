#pragma once

#include "custom_config.h"

#undef TAPPING_TERM
#undef QUICK_TAP_TERM
#undef CAPS_WORD_IDLE_TIMEOUT
#undef ONESHOT_TIMEOUT
#undef COMBO_TERM
#undef COMBO_COUNT
#undef MOUSEKEY_INTERVAL
#undef MOUSEKEY_DELAY
#undef MOUSEKEY_TIME_TO_MAX
#undef MOUSEKEY_MAX_SPEED
#undef MOUSEKEY_WHEEL_DELAY
#undef MOUSEKEY_WHEEL_MAX_SPEED
#undef MOUSEKEY_WHEEL_TIME_TO_MAX

#define TAPPING_TERM						220
#define TAPPING_TERM_PER_KEY
#define DELTA_TAPPING_TERM_PINKY			0
#define DELTA_TAPPING_TERM_RING				0
#define DELTA_TAPPING_TERM_MIDDLE			0
#define DELTA_TAPPING_TERM_INDEX			0
#define DELTA_TAPPING_TERM_INDEX_STRETCH	0
#define DELTA_TAPPING_TERM_THUMB			0

//#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define QUICK_TAP_TERM						0 // defaults to TAPPING_TERM
// #define TAPPING_FORCE_HOLD
// #define TAP_CODE_DELAY					100

#define ACHORDION_STREAK
#define ACHORDION_TIMEOUT					1000
#define ACHORDION_STREAK_TIMEOUT			100

#define CAPS_WORD_IDLE_TIMEOUT				0
#define ONESHOT_TIMEOUT						1000
#define COMBO_TERM							200
#define COMBO_COUNT							5
#define EXTRA_SHORT_COMBOS

#define DUMMY_MOD_NEUTRALIZER_KEYCODE		KC_RIGHT_CTRL

#define MOUSEKEY_INTERVAL	    			16
#define MOUSEKEY_DELAY						0
#define MOUSEKEY_TIME_TO_MAX				32
#define MOUSEKEY_MAX_SPEED					2
#define MOUSEKEY_WHEEL_DELAY				0
#define MOUSEKEY_WHEEL_MAX_SPEED			3
#define MOUSEKEY_WHEEL_TIME_TO_MAX			0
