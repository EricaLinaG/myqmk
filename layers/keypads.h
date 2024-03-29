/*
  Copyright 2018-2022 Eric Gebhart <e.a.gebhart@gmail.com>

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// BEAKL 15 (numpad layer):
/*    +=*   ^%~ */
/*   ↹523:      */
/* - 7.104      */
/*   /698,      */

/* BEAKL27 (numpad layer): */
/*   ↹+/\*=  yxz */
/*    -523: ~FED */
/*    7.104 {CBA} */
/*    ,698⏎  []% */

// Keypads
#define ___KEYPAD_BEAKL_L1___  ___,    _PLUS,  _SLSH,  _ASTR, _EQL
#define ___KEYPAD_BEAKL_L2___  _MINS,  _5,     _2,     _3,   _COLN
#define ___KEYPAD_BEAKL_L3___  _7,     _DOT,   _1,     _0,   _4
#define ___KEYPAD_BEAKL_L4___  _COMM,  _6,     _9,     _8,   _COMM

#define ___6KEYPAD_BEAKL_L1___     ___, KEYPAD_BEAKL_L1
#define ___6KEYPAD_BEAKL_L2___     ___, KEYPAD_BEAKL_L2
#define ___6KEYPAD_BEAKL_L3___ KC_MINS, KEYPAD_BEAKL_L3
#define ___6KEYPAD_BEAKL_L4___     ___, KEYPAD_BEAKL_L4

// if there's room. the top row on the right.
#define ___KEYPAD_BEAKL_R1___     ___, KC_CIRC,  KC_PERC,  KC_TILD, ___

#define ___KP_BKL_WI_L1___ _X_,    HEX_A,  HEX_B,  HEX_C,   _X_
#define ___KP_BKL_WI_L2___ _X_,    HEX_D,  HEX_E,  HEX_F,   _X_
#define ___KP_BKL_WI_L3___ _X_,    L_BRKT, R_BRKT, DELIM,   _X_

#define ___KP_BKL_WI_R1___ _SLSH, _4, _5, _9, _ASTR
#define ___KP_BKL_WI_R2___ _DOT , _1, _2, _3, _MINS
#define ___KP_BKL_WI_R3___ _COMM, _8, _6, _7, _PLUS

#define ___KEYPAD_1___ ___,  _7,  _8,    _9,     _PSLS
#define ___KEYPAD_2___ _DOT, _4,  _5,    _6,     _PAST
#define ___KEYPAD_3___ _0,   _1,  _2,    _3,     _PMNS

#define ___KEYPAD_miryoku_1___ _LBRC, _7,  _8,  _9,  _RBRC, ____5_
#define ___KEYPAD_miryoku_2___ _SCLN, _4,  _5,  _6,  _EQUAL, ____5_
#define ___KEYPAD_miryoku_3___ _GRV,  _1,  _2,  _3,  _BSLS, ____5_

// 5 Row keypads
#define ___5KEYPAD_1___ _X_, ___KEYPAD_1___
#define ___5KEYPAD_2___ _X_, ___KEYPAD_2___
#define ___5KEYPAD_3___ _X_, ___KEYPAD_3___
#define ___5KEYPAD_4___ _X_, _0,  _DOT,  _PEQL,  _PPLS

// Function pad.  Same idea as above, but for function keys.

// Funcpads are a bit weird. THey are KC values, so for
// this to work, there are BP_ versions of the F keys.
// I don't really use this, so maybe it'll go away in favor
// of something more useful.
// 4x3 and 3x4 funcpads.
// Only 4 columns, so the fifth can be added to either end.
#define ___4_FUNCPAD_1___   _F9, _F10, _F11, _F12
#define ___4_FUNCPAD_2___   _F5, _F6,  _F7,  _F8
#define ___4_FUNCPAD_3___   _F1, _F2,  _F3,  _F4

#define ___FUNCPAD_miryoku_1___   KC_F12, KC_F7, KC_F8, KC_F9, KC_PRINT_SCREEN
#define ___FUNCPAD_miryoku_2___   KC_F11, KC_F4, KC_F5, KC_F6, KC_SCROLL_LOCK
#define ___FUNCPAD_miryoku_3___   KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUSE

// For the left or right side.
#define ___5x4_FUNCPAD_T___   _TRNS, _F10,  _F11,  _F12, _TRNS
#define ___5x4_FUNCPAD_1___   _TRNS, _F7,   _F8,   _F9,  _TRNS
#define ___5x4_FUNCPAD_2___   _TRNS, _F4,   _F5,   _F6,  _TRNS
#define ___5x4_FUNCPAD_3___   _TRNS, _F1,   _F2,   _F3,  _TRNS

#ifdef KP_BEAKL_WI_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(KP_BEAKL_WI, \
                   "KP_Beakl WI", \
                   "", \
                   "")

// beakl wi is a hexpad numpad.
/* Beakle Wi, Hexpad and keypad - needs a zero somewhere.*/
carte_de_MAP( "  ABC  /459* ",                \
                "  DEF  .123- ",                \
                "  {}|  ,867+ ")

LAYER_MAP( \
  CHUNK_LANG_MAP(___KP_BKL_WI_L1___, ___KP_BKL_WI_R1___,        \
                 ___KP_BKL_WI_L2___, ___KP_BKL_WI_R2___,        \
                 ___KP_BKL_WI_L3___, ___KP_BKL_WI_R3___))

#endif

#ifdef KP_BEAKL_FUNC_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(KP_BEAKL_FUNC, \
                   "Beakl Keypad", \
                   "", \
                   "")

// BEAKL 15 and a f1-f12 funcpad
carte_de_MAP("    523:  F9-12",               \
               "  -7.104  F5-8",                \
               "   /798,  F1-4")

LAYER_MAP( \
  CHUNK_LANG_MAP(___KEYPAD_BEAKL_L2___, _TRNS, ___4_FUNCPAD_1___,       \
                 ___KEYPAD_BEAKL_L3___, _TRNS, ___4_FUNCPAD_2___,       \
                 ___KEYPAD_BEAKL_L4___, _TRNS, ___4_FUNCPAD_3___))


// 4 rows, BEAKL 15 and a f1-f12 funcpad
LAYER_MAP( \
  CHUNK_LANG_ROW(___KEYPAD_BEAKL_L1___, ___KEYPAD_BEAKL_R1___), \
  CHUNK_LANG_MAP(___KP_BKL_FUNC___))

#endif

#ifdef KP_BEAKL_MODS_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(KP_BEAKL_MODS, \
                   "Beakl Keypad", \
                   "", \
                   "")

// BEAKL 15 and mods.
carte_de_MAP("    523:  SL Mods",                \
               "  -7.104  OS Mods",                \
               "   /798,   Enter")


LAYER_MAP( \
  CHUNK_LANG_MAP(___KEYPAD_BEAKL_L2___, _TRNS, ___SML_MODS_R___,        \
                 ___KEYPAD_BEAKL_L3___, ___OS_MODS_R___,                \
                 ___KEYPAD_BEAKL_L4___, _TRNS, _ENT, _ENT, _ENT, _TRNS))

#endif

#ifdef FP_KP4_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(FP_KP_5x4, \
                   "Funcpad Keypad", \
                   "", \
                   "4 rows, funcpad on left.")

// 4 rows, funcpad, regular keypad on right.
LAYER_MAP( \
  CHUNK_LANG_ROW(___5x4_FUNCPAD_T___,  ___5KEYPAD_1___),        \
    CHUNK_LANG_MAP(___5x4_FUNCPAD_1___,  ___5KEYPAD_2___,       \
                   ___5x4_FUNCPAD_2___,  ___5KEYPAD_3___,       \
                   ___5x4_FUNCPAD_3___,  ___5KEYPAD_4___))

carte_de_MAP("  F9-12   789+",                \
               "  F5-8   .456*",                \
               "  F1-4   0123-")

#endif

#ifdef FP_KP_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(FP_KP, \
                   "Funcpad Keypad", \
                   "", \
                   "Funcpad on left. Keypad on right")

// funcpad, regular keypad on right.
LAYER_MAP( \
  CHUNK_LANG_MAP(___4_FUNCPAD_1___, ___, ___5KEYPAD_1___,       \
                 ___4_FUNCPAD_2___, ___,  ___5KEYPAD_2___,      \
                 ___4_FUNCPAD_3___, ___,  ___5KEYPAD_3___))

carte_de_MAP("  F9-12   789+",                \
               "  F5-8   .456*",                \
               "  F1-4   0123-")

#endif

#ifdef KP_FP_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(KP_FP, \
                   "Funcpad Keypad", \
                   "", \
                   "Keypad on left, funcpad on right.")
// regular keypad on left.
LAYER_MAP( \
  CHUNK_LANG_MAP(___5KEYPAD_1___,  ___, ___4_FUNCPAD_1___,      \
                 ___5KEYPAD_2___,  ___, ___4_FUNCPAD_2___,      \
                 ___5KEYPAD_3___,  ___, ___4_FUNCPAD_3___))

carte_de_MAP("  SMods   789+",                \
               "  OSMods .456*",                \
               "  F1-4   0123-")

#ifdef MODS_KP_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(MODS_KP, \
                   "Mods Keypad", \
                   "", \
                   "Mods on left keypad on right")

// funcpad, regular keypad on right.
LAYER_MAP( \
  CHUNK_LANG_MAP(___SML_MODS_L___, ___, ___5KEYPAD_1___,        \
                 ___OS_MODS_L___,       ___5KEYPAD_2___,     \
                 ___5___,               ___5KEYPAD_3___))

carte_de_MAP("   SMods  789+ ",                \
               "  OSMods .456* ",                 \
               "         0123-  ")

#endif

#ifdef KP_MODS_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(KP_MODS, \
                   "Mods Keypad", \
                   "", \
                   "Keypad on left, Mods on right")

// regular keypad on left.
LAYER_MAP( \
  CHUNK_LANG_MAP(___5KEYPAD_1___,  ___, ___SML_MODS_R___,       \
                 ___5KEYPAD_2___,  ___OS_MODS_L___,        \
                 ___5KEYPAD_3___,  ___, ___4___))
#endif

#ifdef FP_MODS_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(FP_MODS, \
                   "Func pad, Mods", \
                   "", \
                   "Keypad on left, Mods on right")

carte_de_MAP("  F9-F12  SMods",                \
               "  F5-F8   OSMods",               \
               "  F1-F4   ")

LAYER_MAP( \
  CHUNK_LANG_MAP(___4_FUNCPAD_1___, ___,  ___, ___SML_MODS_R___,        \
                 ___4_FUNCPAD_2___, ___,  ___OS_MODS_R___,              \
                 ___4_FUNCPAD_3___, ___,  ___5___))

#ifdef FP_MIRYOKU_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(FP_MIRYOKU, \
                   "Func pad, Mods", \
                   "", \
                   "Funcpad on left, Mods on right")

carte_de_MAP("F12 F7-F9 prt  SMods",          \
               "F11 F4-F6 scr  OSMods",         \
               "F10 F1-F3 pse  ")

LAYER_MAP( \
  ___FUNCPAD_miryoku_1___,  ___, ___SML_MODS_R___,     \
    ___FUNCPAD_miryoku_2___,  ___OS_MODS_R___,         \
    ___FUNCPAD_miryoku_3___,  ___5___))

#endif

#ifdef KP_MIRYOKU_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(KP_MIRYOKU, \
                   "Miryoku Keypad", \
                   "", \
                   "Keypad on left. Wants . and 0 on left thumb.")

// wants . and 0 on left thumb.
carte_de_MAP(" [789]",      \
               " ;456=",      \
               " `123\\")

LAYER_MAP( \
  CHUNK_LANG_MAP(___KEYPAD_miryoku_1___,                          \
                 ___KEYPAD_miryoku_2___,                             \
                 ___KEYPAD_miryoku_3___))
#endif
