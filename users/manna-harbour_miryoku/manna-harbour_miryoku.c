#include QMK_KEYBOARD_H

#include "manna-harbour_miryoku.h"
#include "features/layer_lock.h"
#include "features/achordion.h"

// Custom Keycodes
// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md
// Macros
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_macros.md
// Layer Lock
// https://getreuer.info/posts/keyboards/layer-lock/index.html

enum custom_keycodes
{
	LLOCK = SAFE_RANGE,
	UNI_QUES,
	UNI_EXCL,
	UNI_EMDH,
	UNI_BULL,
	UNI_DEGR,
	UNI_ELPS,
	UNI_VELP,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (!process_achordion(keycode, record)) { return false; }
	if (!process_layer_lock(keycode, record, LLOCK)) { return false; }
	switch (keycode) {
		case UNI_QUES: if (record->event.pressed)		{ send_string("`q-ques"); } return false; // ¿
		case UNI_EXCL: if (record->event.pressed)		{ send_string("`q-excl"); } return false; // ¡
		case UNI_EMDH: if (record->event.pressed)		{ send_string("`q-emdh"); } return false; // —
		case UNI_BULL: if (record->event.pressed)		{ send_string("`q-bull"); } return false; // •
		case UNI_DEGR: if (record->event.pressed)		{ send_string("`q-degr"); } return false; // °
		case UNI_ELPS: if (record->event.pressed)		{ send_string("`q-elps"); } return false; // …
		case UNI_VELP: if (record->event.pressed)		{ send_string("`q-velp"); } return false; // ⋮
		// case MULTI: if (record->event.pressed)		{ send_string_or_shifted_string("`q-uni", "`q-code"); } return false;
    }
	return true;
}


// Key Overrides
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_key_overrides.md

bool custom_action_toggle_cap_words(bool key_down, void *layer) { if (key_down)	{ caps_word_toggle(); } return false; }
bool custom_action_send_string_arrow_nw(bool key_down, void *layer) { if (key_down)	{ send_string_no_shift("`q-arnw"); } return false; }
bool custom_action_send_string_arrow_n(bool key_down, void *layer) { if (key_down)	{ send_string_no_shift("`q-arrn"); } return false; }
bool custom_action_send_string_arrow_ne(bool key_down, void *layer) { if (key_down)	{ send_string_no_shift("`q-arne"); } return false; }
bool custom_action_send_string_arrow_w(bool key_down, void *layer) { if (key_down)	{ send_string_no_shift("`q-arrw"); } return false; }
bool custom_action_send_string_arrow_we(bool key_down, void *layer) { if (key_down)	{ send_string_no_shift("`q-arwe"); } return false; }
bool custom_action_send_string_arrow_e(bool key_down, void *layer) { if (key_down)	{ send_string_no_shift("`q-arre"); } return false; }
bool custom_action_send_string_arrow_sw(bool key_down, void *layer) { if (key_down)	{ send_string_no_shift("`q-arsw"); } return false; }
bool custom_action_send_string_arrow_s(bool key_down, void *layer) { if (key_down)	{ send_string_no_shift("`q-arrs"); } return false; }
bool custom_action_send_string_arrow_se(bool key_down, void *layer) { if (key_down)	{ send_string_no_shift("`q-arse"); } return false; }

const key_override_t semicolon_on_shifted_comma =	key_shifted_override(KC_COMM, KC_SCLN); // ;
const key_override_t colon_on_shifted_dot =			key_shifted_override(KC_DOT, KC_COLN); // :
//const key_override_t capword_on_shifted_grave =		key_shifted_override_custom_action(KC_GRV, custom_action_toggle_cap_words); // CW_TOGG
const key_override_t keypad1_on_shifted_1 =			key_shifted_override(KC_1, KC_P1); // Numpad 1
const key_override_t keypad2_on_shifted_2 =			key_shifted_override(KC_2, KC_P2); // Numpad 2
const key_override_t keypad3_on_shifted_3 =			key_shifted_override(KC_3, KC_P3); // Numpad 3
const key_override_t keypad4_on_shifted_4 =			key_shifted_override(KC_4, KC_P4); // Numpad 4
const key_override_t keypad5_on_shifted_5 =			key_shifted_override(KC_5, KC_P5); // Numpad 5
const key_override_t keypad6_on_shifted_6 =			key_shifted_override(KC_6, KC_P6); // Numpad 6
const key_override_t keypad7_on_shifted_7 =			key_shifted_override(KC_7, KC_P7); // Numpad 7
const key_override_t keypad8_on_shifted_8 =			key_shifted_override(KC_8, KC_P8); // Numpad 8
const key_override_t keypad9_on_shifted_9 =			key_shifted_override(KC_9, KC_P9); // Numpad 9
const key_override_t keypad0_on_shifted_0 =			key_shifted_override(KC_0, KC_P0); // Numpad 0
const key_override_t f1_on_shifted_arrow =			key_shifted_override_custom_action(KC_F1, custom_action_send_string_arrow_w); // ←
const key_override_t f2_on_shifted_arrow =			key_shifted_override_custom_action(KC_F2, custom_action_send_string_arrow_we); // ↔
const key_override_t f3_on_shifted_arrow =			key_shifted_override_custom_action(KC_F3, custom_action_send_string_arrow_e); // →
const key_override_t f4_on_shifted_arrow =			key_shifted_override_custom_action(KC_F4, custom_action_send_string_arrow_sw); // ↙
const key_override_t f5_on_shifted_arrow =			key_shifted_override_custom_action(KC_F5, custom_action_send_string_arrow_s); // ↓
const key_override_t f6_on_shifted_arrow =			key_shifted_override_custom_action(KC_F6, custom_action_send_string_arrow_se); // ↘
const key_override_t f7_on_shifted_arrow =			key_shifted_override_custom_action(KC_F7, custom_action_send_string_arrow_nw); // ↖
const key_override_t f8_on_shifted_arrow =			key_shifted_override_custom_action(KC_F8, custom_action_send_string_arrow_n); // ↑
const key_override_t f9_on_shifted_arrow =			key_shifted_override_custom_action(KC_F9, custom_action_send_string_arrow_ne); // ↗
const key_override_t no_shift_equals =				key_shifted_override(KC_EQL, KC_EQL);
const key_override_t no_shift_minus =				key_shifted_override(KC_MINS, KC_MINS);
const key_override_t no_shift_slash =				key_shifted_override(KC_SLSH, KC_SLSH);
const key_override_t no_shift_backslash =			key_shifted_override(KC_BSLS, KC_BSLS);
const key_override_t no_shift_left_bracket =		key_shifted_override(KC_LBRC, KC_LBRC);
const key_override_t no_shift_right_bracket =		key_shifted_override(KC_RBRC, KC_RBRC);

const key_override_t **key_overrides = (const key_override_t *[]){
    &semicolon_on_shifted_comma,
    &colon_on_shifted_dot,
	&keypad1_on_shifted_1,
	&keypad2_on_shifted_2,
	&keypad3_on_shifted_3,
	&keypad4_on_shifted_4,
	&keypad5_on_shifted_5,
	&keypad6_on_shifted_6,
	&keypad7_on_shifted_7,
	&keypad8_on_shifted_8,
	&keypad9_on_shifted_9,
	&keypad0_on_shifted_0,
	&f1_on_shifted_arrow,
	&f2_on_shifted_arrow,
	&f3_on_shifted_arrow,
	&f4_on_shifted_arrow,
	&f5_on_shifted_arrow,
	&f6_on_shifted_arrow,
	&f7_on_shifted_arrow,
	&f8_on_shifted_arrow,
	&f9_on_shifted_arrow,
	&no_shift_equals,
	&no_shift_minus,
	&no_shift_slash,
	&no_shift_backslash,
	&no_shift_left_bracket,
	&no_shift_right_bracket,
    NULL
};


// Combos
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_combo.md

const uint16_t PROGMEM space_bkspc[] = {LT_SPC, LT_BSP, COMBO_END};
const uint16_t PROGMEM tab_enter[]   = {LT_TAB, LT_ENT, COMBO_END};
const uint16_t PROGMEM space_tab[]   = {LT_SPC, LT_TAB, COMBO_END};
const uint16_t PROGMEM bkspc_enter[] = {LT_BSP, LT_ENT, COMBO_END};
const uint16_t PROGMEM space_bkspc_tab_enter[] = {LT_SPC, LT_BSP, LT_TAB, LT_ENT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
	COMBO(space_bkspc, CW_TOGG),
	COMBO(tab_enter, KC_ESC),
	COMBO(space_tab, MO(U_MOUSE)),
	COMBO(bkspc_enter, MO(U_FUNC)),
	COMBO(space_bkspc_tab_enter, TO(U_GAME)),
};


// Caps Word
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_caps_word.md

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Appy and continue caps.
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;
        // Continue caps.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
		case KC_MINS:
		case KC_QUOT:
		case KC_GRV:
		case KC_PDOT:
		case KC_SLSH:
		case KC_BSLS:
            return true;
		// Turn off caps.
        default:
            return false;
    }
}


// Tap-Hold
// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
	if (record->event.key.row == 3)
        return g_tapping_term + DELTA_TAPPING_TERM_THUMB;
	switch (record->event.key.col) {
		case 0:
		case 9:
			return g_tapping_term + DELTA_TAPPING_TERM_PINKY;
		case 1:
		case 8:
			return g_tapping_term + DELTA_TAPPING_TERM_RING;
		case 2:
		case 7:
			return g_tapping_term + DELTA_TAPPING_TERM_MIDDLE;
		case 3:
		case 6:
			return g_tapping_term + DELTA_TAPPING_TERM_INDEX;
		case 4:
		case 5:
			return g_tapping_term + DELTA_TAPPING_TERM_INDEX_STRETCH;
        default:
			return g_tapping_term;
    }
}


// Achordion
// https://getreuer.info/posts/keyboards/achordion/index.html

void matrix_scan_user(void) {
	achordion_task();
}

bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) {
	return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
	return ACHORDION_TIMEOUT;
}

uint16_t achordion_streak_timeout(uint16_t tap_hold_keycode) {
  return ACHORDION_STREAK_TIMEOUT;
}

bool achordion_eager_mod(uint8_t mod) {
	switch (mod) {
		case MOD_LSFT:
		case MOD_LCTL:
			return true;
		default:
			return false;
	}
}


// Keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	#define MIRYOKU_X(LAYER, STRING) [U_##LAYER] = U_MACRO_VA_ARGS(MIRYOKU_LAYERMAPPING_##LAYER, MIRYOKU_LAYER_##LAYER),
	MIRYOKU_LAYER_LIST
	#undef MIRYOKU_X
};
