#pragma once

// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_advanced_keycodes.md
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_layers.md
// https://precondition.github.io/home-row-mods
// Keyboard layouts: https://docs.google.com/document/d/1_a5Nzbkwyk1o0bvTctZrtgsee9jSP-6I0q3A0_9Mzm0

#define MIRYOKU_BASE \
KC_P,              KC_C,              KC_L,              KC_M,              KC_V,              KC_K,              KC_U,              KC_O,              KC_Y,              KC_GRV,            \
HRM_N,             HRM_S,             HRM_R,             HRM_T,             KC_D,              KC_DOT,            HRM_A,             HRM_E,             HRM_I,             HRM_H,             \
KC_F,              KC_G,              KC_QUOT,           KC_W,              KC_Q,              KC_X,              KC_COMM,           KC_Z,              KC_J,              KC_B,              \
U_NP,              U_NP,              N_NP,              LT_SPC,            LT_TAB,            LT_ENT,            LT_BSP,            N_NP,              U_NP,              U_NP
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |   p   |   c   |   l   |   m   |   v   |                          |   k   |   u   |   o   |   y   |   `   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |   n   |   s   |   r   |   t   |   d   |                          |   .   |   a   |   e   |   i   |   h   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |   f   |   g   |   '   |   w   |   q   |                          |   x   |   ,   |   z   |   j   |   b   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
//                         | space |  tab  |                          | enter | bkspc |
//                          _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _

#define MIRYOKU_NAV \
U_NU,              U_NU,              LLOCK,             U_NU,              U_NU,              KC_INS,            U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LSFT,           KC_LCTL,           U_NU,              KC_APP,            KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              KC_DEL,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
U_NP,              U_NP,              U_NP,              KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           U_NP,              U_NP,              U_NP
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |       |       | lock  |       |       |                          |  ins  | paste | copy  |  cut  | undo  |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |  win  |  alt  | shift | ctrl  |       |                          |  app  |   ←   |   ↓   |   ↑   |   →   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |       |       |       |       |       |                          |  del  | home  | pgdn  | pgup  |  end  |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
//                         | space |  tab  |                          | enter | bkspc |
//                          _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _

#define MIRYOKU_NUM \
KC_PPLS,           KC_7,              KC_8,              KC_9,              KC_PAST,           U_NU,              U_NU,              LLOCK,             U_NU,              U_NU,              \
KC_0,              KC_1,              KC_2,              KC_3,              KC_PDOT,           U_NU,              KC_LCTL,           KC_LSFT,           KC_LALT,           KC_LGUI,           \
KC_PMNS,           KC_4,              KC_5,              KC_6,              KC_PSLS,           U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NP,              KC_SPC,            KC_TAB,            KC_PENT,           KC_BSPC,           U_NP,              U_NP,              U_NP
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |   +   |   7   |   8   |   9   |   *   |                          |       |       | lock  |       |       |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |   0   |   1   |   2   |   3   |   .   |                          |       | ctrl  | shift |  alt  |  win  |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |   -   |   4   |   5   |   6   |   /   |                          |       |       |       |       |       |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
//                         | space |  tab  |                          | enter | bkspc |
//                          _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _

#define MIRYOKU_SYM \
U_NU,              U_NU,              LLOCK,             U_NU,              U_NU,              UNI_DEGR,          KC_PIPE,           KC_PLUS,           KC_ASTR,           KC_CIRC,           \
KC_LGUI,           KC_LALT,           KC_LSFT,           KC_LCTL,           U_NU,              UNI_ELPS,          KC_AMPR,           KC_MINS,           KC_SLSH,           KC_PERC,           \
U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              UNI_EXCL,          UNI_QUES,          KC_QUES,           KC_TILD,           KC_EXLM,           \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_NU,              KC_EQL,            U_NP,              U_NP,              U_NP
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |       |       | lock  |       |       |                          |   °   |   |   |   +   |   *   |   ^   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |  win  |  alt  | shift | ctrl  |       |                          |   …   |   &   |   -   |   /   |   %   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |       |       |       |       |       |                          |   ¡   |   ¿   |   ?   |   ~   |   !   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
//                         |  n/a  |  n/a  |                          |       |   =   |
//                          _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _

#define MIRYOKU_BRACK \
KC_LABK,           KC_RABK,           KC_LCBR,           KC_RCBR,           UNI_VELP,          U_NU,              U_NU,              LLOCK,             U_NU,              U_NU,              \
KC_HASH,           KC_DLR,            KC_LPRN,           KC_RPRN,           UNI_EMDH,          U_NU,              KC_LCTL,           KC_LSFT,           KC_LALT,           KC_LGUI,           \
KC_AT,             KC_BSLS,           KC_LBRC,           KC_RBRC,           UNI_BULL,          U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NP,              KC_UNDS,           U_NU,              U_NA,              U_NA,              U_NP,              U_NP,              U_NP
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |   <   |   >   |   {   |   }   |   ⋮   |                          |       |       | lock  |       |       |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |   #   |   $   |   (   |   )   |   —   |                          |       | ctrl  | shift |  alt  |  win  |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |   @   |   \   |   [   |   ]   |   •   |                          |       |       |       |       |       |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
//                         |   _   |       |                          |  n/a  |  n/a  |
//                          _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _

#define MIRYOKU_MOUSE \
U_NU,              U_NU,              LLOCK,             U_NU,              U_NU,              U_NU,              KC_MPLY,           KC_VOLD,           KC_VOLU,           KC_MUTE,           \
KC_LGUI,           KC_LALT,           KC_LSFT,           KC_LCTL,           U_NU,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
U_NU,              KC_ACL0,           KC_ACL1,           KC_ACL2,           U_NU,              U_NU,              KC_BTN3,           KC_WH_D,           KC_WH_U,           U_NU,              \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           U_NP,              U_NP,              U_NP
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |       |       | lock  |       |       |                          |       | play  | vol-  | vol+  | mute  |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |  win  |  alt  | shift | ctrl  |       |                          |       |   ←   |   ↓   |   ↑   |   →   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |       | acc0  | acc1  | acc2  |       |                          |       |  mb3  |   ↓   |   ↑   |       |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
//                         |  n/a  |  n/a  |                          |  mb2  |  mb1  |
//                          _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _

#define MIRYOKU_FUNC \
KC_F12,            KC_F7,             KC_F8,             KC_F9,             DT_UP,             U_NU,              U_NU,              LLOCK,             U_NU,              QK_BOOT,           \
KC_F11,            KC_F1,             KC_F2,             KC_F3,             DT_PRNT,           U_NU,              KC_LCTL,           KC_LSFT,           KC_LALT,           KC_LGUI,           \
KC_F10,            KC_F4,             KC_F5,             KC_F6,             DT_DOWN,           U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NP,              KC_PAUS,           KC_PSCR,           U_NA,              U_NA,              U_NP,              U_NP,              U_NP
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |  f12  |  f7   |  f8   |  f9   | ttup  |                          |       |       | lock  |       | boot  |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |  f11  |  f1   |  f2   |  f3   | ttpr  |                          |       | ctrl  | shift |  alt  |  win  |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |  f10  |  f4   |  f5   |  f6   | ttdw  |                          |       |       |       |       |       |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
//                         | pause | print |                          |  n/a  |  n/a  |
//                          _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _

#define MIRYOKU_GAME \
KC_TAB,            KC_Q,              KC_W,              KC_E,              KC_R,              KC_ESC,            KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
KC_LSFT,           KC_A,              KC_S,              KC_D,              KC_F,              KC_ENT,            KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
KC_Z,              KC_1,              KC_2,              KC_3,              KC_4,              TO(U_BASE),        KC_V,              KC_WH_D,           KC_WH_U,           KC_G,              \
U_NP,              U_NP,              U_NP,              KC_SPC,            KC_LCTL,           KC_BTN2,           KC_BTN1,           U_NP,              U_NP,              U_NP
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |  tab  |   q   |   w   |   e   |   r   |                          |  esc  |   ←   |   ↓   |   ↑   |   →   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// | shift |   a   |   s   |   d   |   f   |                          | enter |   ←   |   ↓   |   ↑   |   →   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
// |   z   |   1   |   2   |   3   |   4   |                          | base  |   v   |   ↓   |   ↑   |   g   |
//  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
//                         | space | ctrl  |                          |  mb2  |  mb1  |
//                          _ _ _ _ _ _ _ _                            _ _ _ _ _ _ _ _
