#pragma once

#include "miryoku_babel/miryoku_layer_selection.h"
#include "miryoku_babel/miryoku_layer_list.h"
#include "features/achordion.h"

enum miryoku_layers {
#define MIRYOKU_X(LAYER, STRING) U_##LAYER,
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
};

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)

#if !defined (MIRYOKU_MAPPING)
  #define MIRYOKU_MAPPING LAYOUT_miryoku
#endif

// No key codes
#define U_NP KC_NO // key not present
#define U_NA KC_NO // present but not available
#define U_NU KC_NO // available but not used

// Home row mods
#define HRM_N LGUI_T(KC_N)
#define HRM_S LALT_T(KC_S)
#define HRM_R LSFT_T(KC_R)
#define HRM_T LCTL_T(KC_T)
#define HRM_A LCTL_T(KC_A)
#define HRM_E LSFT_T(KC_E)
#define HRM_I LALT_T(KC_I)
#define HRM_H LGUI_T(KC_H)

// Thumb layers
#define LT_SPC LT(U_NAV,KC_SPC)
#define LT_TAB LT(U_SYM,KC_TAB)
#define LT_ENT LT(U_BRACK,KC_ENT)
#define LT_BSP LT(U_NUM,KC_BSPC)

// Shortcuts
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)


// Functions

#define key_shifted_override(trigger_key, replacement_key) \
	ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, trigger_key, replacement_key, ~0, MOD_MASK_CA, ko_option_no_reregister_trigger);

#define key_shifted_override_custom_action(trigger_key, custom_action_func) \
    { \
        .trigger            = trigger_key, \
        .trigger_mods       = MOD_MASK_SHIFT, \
        .layers             = ~0, \
        .suppressed_mods    = MOD_MASK_SHIFT, \
        .options            = ko_options_default, \
        .negative_mod_mask  = MOD_MASK_CA, \
        .custom_action      = custom_action_func, \
        .context            = NULL, \
        .replacement        = KC_NO, \
        .enabled            = NULL \
    }

#define send_string_no_shift(string) \
    do { \
        del_mods(MOD_BIT(KC_LSFT)); \
        send_string(string); \
        add_mods(MOD_BIT(KC_LSFT)); \
    } while (0)

#define send_string_or_shifted_string(string, shiftedString) \
    do { \
        if (get_mods() & MOD_BIT(KC_LSFT)) \
            send_string_no_shift(shiftedString); \
        else \
            send_string(string); \
    } while (0)
