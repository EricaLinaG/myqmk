#pragma once
/*
  Copyright 2018-2023 EricaLina, Eric Gebhart <e.a.gebhart@gmail.com>

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "custom_keycodes.h"

#define CHUNK_LANG_MAP(...) LANG_MAP(__VA_ARGS__)
#define CHUNK_LANG_ROW(...) LANG_ROW(__VA_ARGS__)
// Layer name, definition, text name, text map.
#define BLANK(...)
LAYER_NAME(...) BLANK(__VA_ARGS__)
//#define _LAYER_NAME(layer, definition, text_name, map, url, note) \
//       _%%layer, text_name, note
// for base_names.h, etc.
//#define _LAYER_NAME(layer, definition, text_name, map, url, note) \
//       LANG_N(_%%layer),

/* B_LAYER(LANG_N(_MTGAP), ___10_NUMBERS___, ___MTGAP___), */
/* B_LAYERt6(LANG_N(_BEPO), ___12_SYMBOLS_BEPO___, ___BEPO_3x12___), */
/* T_LAYER(_NAVm, ___NAVm_3x10___), */

#include "accents.h"
#include "toprows.h"
#include "keypads.h"
#include "nav.h"
#include "symbols.h"
#include "utility.h"

/********************************************************************************/
/* MEDIA  - Mute, Vol, play, pause, stop, next, prev, etc.   */
/********************************************************************************/
#define ___PRV_PLAY_NXT_STOP___ KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP
#define ___VDN_MUTE_VUP___ KC_VOLD, KC_MUTE, KC_VOLU

#define ___PRV_VDN_VUP_NXT___ KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT
#define ___STOP_PLAY_MUTE___ KC_MSTP, KC_MPLY, KC_MUTE

#define ___MUTE_PRV_PLAY_NXT_STOP___  KC_MUTE,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP
#define ___MUTE_PLAY_STOP___  KC_MUTE,  KC_MPLY,  KC_MSTP

#ifdef MEDIA_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(MEDIA, \
                   "MEDIA", \
                   "", \
                   "A Layer for Controlling media")

carte_de_MAP(" ",                      \
               "  < vdn vup >",          \
               "  stp play mute")

// miryoku, to be used with stop play mute on thumbs. - MEDIA thumbs.
LAYER_MAP(                        \
  ___5___, ___5___,                             \
    ___5___, ___, ___PRV_VDN_VUP_NXT___,        \
    ___5___, ___5___)

#endif

/********************************************************************************/
/* RGB  - Control those lights.                                                 */

/* ___, HUE SAT_INT MOD (UP),            | */
/* ___, HUE SAT INT MOD (DOWN), RGB_TOG  | P_B_R_SW_SN___, ___ */
/* ___6___,                              | ___, ___RGB_KXGT___, ___ */
/********************************************************************************/
// RGB FUNCTION Keysets
// RGB row for the _FN layer from the redo of the default keymap.c
#define ___RGB_HUE_SAT_INT_UP___ RGB_HUI, RGB_SAI, RGB_VAI, RGB_RMOD
#define ___RGB_HUE_SAT_INT_DN___ RGB_HUD, RGB_SAD, RGB_VAD, RGB_MOD
#define ___RGB_MODE_PRV_NXT___   RGB_RMOD, RGB_MOD
#define ___RGB_TOGGLE___         RGB_TOG
#define ___RGB_P_B_R_SW_SN___    RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN
#define ___RGB_KXGT___           RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T

/// An RGB Layer
#define ___10_RGB_1___ ___RGB_HUE_SAT_INT_UP___, ___,     ___5___
#define ___10_RGB_2___ ___RGB_HUE_SAT_INT_DN___, RGB_TOG, ___RGB_P_B_R_SW_SN___
#define ___10_RGB_3___ ___5___,                                ___, ___RGB_KXGT___

/********************************************************************************/
/* The RGB LAYER Chunk                                                          */
/********************************************************************************/
#ifdef RGB_LAYER_ENABLE

// Layer name, definition, text name, text map, url, note.
LAYER_NAME(RGB, \
                   "RGB", \
                   "", \
                   "A Layer for adjusting lights.")

carte_de_MAP(" ",          \
               " ",          \
               " ")

LAYER_MAP( ___10_RGB_1___, ___10_RGB_2___, ___10_RGB_3___)

#endif

/********************************************************************************/
/* ADJUST - Miscellaneous Melange.                                              */
/********************************************************************************/
// For an Adjust layer. Like RBB with audio, flash, etc.
#define ___ADJUST_L1___ ___RGB_HUE_SAT_INT_UP___,       RGB_TOG
#define ___ADJUST_L2___ MU_TOG, CK_TOGG, AU_ON, AU_OFF, CG_NORM
#define ___ADJUST_L3___ ___RGB_HUE_SAT_INT_DN___,       KC_RGB_T

#define ___ADJUST_R1___  ___, KC_MAKE, VRSN, MG_NKRO, KC_RESET
#define ___ADJUST_R2___  EE_CLR, ___PRV_PLAY_NXT_STOP___,
#define ___ADJUST_R3___  MG_NKRO, ___VDN_MUTE_VUP___, RGB_IDL
/********************************************************************************/
/* The Adjust LAYER Chunks                                                      */
/********************************************************************************/
#ifdef ADJUST_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(ADJUST, \
                   "Adjust", \
                   "", \
                   "A Layer for Adjusting things.")

carte_de_MAP(" ",          \
               " ",          \
               " ")

LAYER_MAP(  ___ADJUST_L1___, ___ADJUST_R1___,    \
    ___ADJUST_L2___, ___ADJUST_R2___,                           \
    ___ADJUST_L3___, ___ADJUST_R3___)

#endif

/********************************************************************************/
/* LAYERS - Define a base layer, switch to any layer. Get around. Experiment.   */
/*                                                                              */
/* Base Layers on the left hand,                                                */
/* transient layers on the right. Centered on the home region.                  */
/* A good place to attach an experimental layer.                                */
/*                                                                              */
/********************************************************************************/
//  Base Layers
// this was kc_dvorak et al. But since its configurable as to who would be here
// that no longer makes sense. So next keys for locale and base layer. and a set to
// make it permanent. Cycling of layers is based on current locale.
#define ___BASE_LAYERS___ ___, KC_SET_BASE, KC_NEXT_BASE_LAYER, KC_NEXT_LOCALE, ___

// transient layers.
#define ___5_LAYERS_T___     ___, MO(_NAV),  MO_SYMB,  MO_KEYPAD,  MO_TOPROWS
#ifdef SECOND_LOCALE
#undef LANG_IS
#define LANG_IS SECOND_LOCALE
#define ___5_LAYERS_T_BP___  ___, MO(_NAV),  MO_SYMB,  MO_KEYPAD,  MO_TOPROWS
#undef LANG_IS
#define LANG_IS DEFAULT_LANG
#else
#define ___5_LAYERS_T_BP___  ___, MO(_NAV),  ___3___
#endif

#define ___5_LAYERS_T_CTL___ ___, MO_RGB, ___, ___, MO_ADJUST


#ifdef LAYERS_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(LAYERS, \
                   "Layers", \
                   "", \
                   "A Layer for accessing layers.")


carte_de_MAP("          |Nv S K TR",          \
               "  EE Bs Ln|Nv S K TR",          \
               " ")

/// A Layers Layer
LAYER_MAP(                       \
    ___5___,            ___5_LAYERS_T_BP___,      \
    ___BASE_LAYERS___,  ___5_LAYERS_T___,       \
    ___5___,            ___5_LAYERS_T_CTL___)

#endif
