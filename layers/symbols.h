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

// Left
#define ___SB_L1___          _OCLTGT, _DLR,    _GT
#define ___SB_L1d___         _OCLTGT, _OCQUOT, _GT
#define ___SB_L2___  _BSLS,  _OCPRN,  _OCDQUO, _RPRN, _HASH
#define ___SB_L2c___ _BSLS,  _OCPRN,  _OCDQUO, _HASH, _RPRN
#define ___SB_L2d___ _BSLS,  _OCPRN,  _OCDQUO, _HASH, _PERC
#define ___SB_L3___          _COLN,   _ASTR,   _PLUS

// Right
#define ___SB_R1___          _OCBRC,   _UNDS,     _RBRC
#define ___SB_R1c___         _OCBRC,   _UNDS,     _MINS
#define ___SB_R1d___ _OCBRC, _QUES,    _UNDS,     _EXLM
#define ___SB_R2___  _PERC,  _OCCBR,   _EQL,      _RCBR,  _PIPE
#define ___SB_R3___          _AMPR,    _CIRC_ND,  _TILD_ND

// a and b... left and right.
#define ___SB_L3b___          _EQL,    _ASTR,   _PLUS

#define ___SB_R2a___ _PERC,  _OCCBR,   _EXLM,  _RCBR,  _PIPE
#define ___SB_R2b___ _EXLM,  _OCCBR,   _COLN,  _RCBR,  _SLSH
#define ___SB_R2c___ _EXLM,  _OCCBR,   _COLN,  _SLSH,  _RCBR
#define ___SB_R2d___ _OCCBR, _MINS,    _COLN,  _SLSH,  _PIPE

// ---------------------------
// ---------------------------

#ifdef SYMB_BEAKL_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(SYMB_BEAKL, \
                   "Symb Beakl", \
                   "", \
                   "Original Beakl 15 Symbol layer, has tap hold on delimiters.")

carte_de_MAP("  <$>   [_]   ",                \
               "-\\(\")# %{=}|;",               \
               "  :*+   &^~   ")

LAYER_MAP(                                           \
  CHUNK_LANG_MAP(_TRNS,   ___SB_L1___, _TRNS,    _TRNS,  ___SB_R1___, _TRNS, \
                 ___SB_L2___,                    ___SB_R2___,           \
                 _TRNS,   ___SB_L3___, _TRNS,    _TRNS, ___SB_R3___, _TRNS))

#endif

#ifdef SYMB_BEAKL_EXT_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(SYMB_BEAKL_EXT_, \
                   "Symb Beakl extended", \
                   "", \
                   "Beakl Symbol layer, extended for other base layers")

// ---------------------------
// A: Extended.
carte_de_MAP("   `<$>'  ?[_]-",               \
               "  -\\(\")#  %{:}|;",            \
               "   @=*+;  !&^~/")

LAYER_MAP(                                          \
  CHUNK_LANG_MAP(_OCGRV, ___SB_L1___, _OCQUOT,   _QUES,  ___SB_R1___, _MINS, \
                 ___SB_L2___,                    ___SB_R2a___,          \
                 _AT,    ___SB_L3___, _SCLN,     _EXLM, ___SB_R3___, _SLSH))

#endif

#ifdef SYMB_BEAKL_EXT_VI_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(SYMB_BEAKL_EXT_VI, \
                   "Symb Beakl ext-vi", \
                   "", \
                   "Beakl Symbol layer, extended and optimised for vi.")

// ---------------------------
// B: Extended & Vi
carte_de_MAP("   `<$>'  ?[_]-",               \
               "  -\\(\")#  !{:}/;",            \
               "   @=*+;  %&^~|")

LAYER_MAP(                                          \
  CHUNK_LANG_MAP(_OCGRV, ___SB_L1___,  _OCQUOT,   _QUES,  ___SB_R1___, _MINS, \
                 ___SB_L2___,                     ___SB_R2b___,         \
                 _AT,    ___SB_L3b___, _SCLN,     _PERC, ___SB_R3___, _PIPE))

#endif

#ifdef SYMB_BEAKL_EXT_VI_OPT_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(SYMB_BEAKL_EXT_VI_OPT_, \
                   "Symb Beakl ext-vi-opt", \
                   "", \
                   "Beakl Symbol layer, extended, vi/emacs optimized.")

// ---------------------------
// C: Extended & Vi, move closing braces to pinky, seldom used.
// because of tap hold - open_openclose feature.
// Also emacs which mostly closes them.
carte_de_MAP("   `<$>'  ?[_-]",               \
               "  -\\(\"#)  !{:/};",            \
               "   @=*+;  %&^~|")

LAYER_MAP(                                          \
  CHUNK_LANG_MAP(_OCGRV, ___SB_L1___,  _OCQUOT,   _QUES,  ___SB_R1c___, _RBRC, \
                 ___SB_L2c___,                     ___SB_R2c___,        \
                 _AT,    ___SB_L3b___, _SCLN,     _PERC, ___SB_R3___, _PIPE))

#endif

#ifdef SYMB_BEAKL_EXT_VI_OPT_RED_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(SYMB_BEAKL_EXT_VI_OPT_RED_, \
                   "Symb Beakl ext-vi-opt-red", \
                   "", \
                   "Beakl Symbol layer, extended, vi/emacs, )}] on combos")

// Next evolution.
// Use combos to get closing )]} instead of on the map.
// only need closes to 'fix something' that got out of wack somehow.
//
// pipe gets it's old home back, @ moves to index, pinkies get less load.
// [{ get demoted, ?! move up. @ moves to inner index,
// percent gets a better spot on the other side.
// and ' gets to be in the center, while $ gets a corner. pinkies are almost free.
// maybe ?_! can switch around some.  Room to mess around with the corners.

// Symbol extended vi/emacs optimised reduced.
carte_de_MAP("   `<'>$  [?_! ",               \
               "   \\(\"#%  {-:/|",             \
               "    =*+;  @&^~ ")

LAYER_MAP(                                   \
  CHUNK_LANG_MAP(_OCGRV, ___SB_L1d___,  _DLR,   ___SB_R1d___, _NO,   \
                 ___SB_L2d___,                  ___SB_R2d___,           \
                 _NO,    ___SB_L3b___, _SCLN,     _AT, ___SB_R3___, _NO))

#endif

#ifdef SYMB_MIRYOKU_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(SYMB_MIRYOKU,\
                   "Symb Miryoku", \
                   "", \
                   "Miryoku symbol layer")

// wants ( and ) on the left thumb.
carte_de_MAP("  {&.(} ",                                  \
               "  :$%^+ ",                                  \
               "  ~!@#| ")

LAYER_MAP(                         \
  CHUNK_LANG_MAP(_OCCBR,   _AMPR, _DOT,  _OCPRN,   _RCBR, ____5_,     \
                 _COLN,    _DLR,  _PERC, _CIRC_ND, _PLUS, ____5_,     \
                 _TILD_ND, _EXLM, _AT,   _HASH,    _PIPE, ____5_))

#endif

#ifdef SYMB_BEAKL_WI_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(SYMB_BEAKL_WI, \
                   "Symb Beakl WI", \
                   "", \
                   "Beakl WI symbol layer")

// ---------------------------
// WI: the Beakl Wi definition.
#define ___SYMB_BKL_WI_L1___ ___,   _DOT,  _ASTR, _AMPR, _PLUS
#define ___SYMB_BKL_WI_L2___ ___,   _QUES, _EXLM, _SLSH, _PIPE
#define ___SYMB_BKL_WI_L3___ ___,   _LT,   _GT,   _PERC, _AT

#define ___SYMB_BKL_WI_R1___ _ASTR, _OCBRC, _CIRC_ND, _RBRC, ___
#define ___SYMB_BKL_WI_R2___ _QUES, _OCPRN, _DLR ,    _RPRN, ___
#define ___SYMB_BKL_WI_R3___ _PIPE, _OCCBR, _HASH,    _RCBR, ___

carte_de_MAP(" .*&+  *[^] ",                  \
               " ?!/|  ?($) ",                  \
               " <>%@  |{#} ")

LAYER_MAP(                                \
  CHUNK_LANG_MAP(___SYMB_BKL_WI_L1___, ___SYMB_BKL_WI_R1___,    \
                 ___SYMB_BKL_WI_L2___, ___SYMB_BKL_WI_R2___,    \
                 ___SYMB_BKL_WI_L3___, ___SYMB_BKL_WI_R3___))

#endif

#ifdef SYMB_NEO_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(SYMB_NEO, \
                   "Symb Neo", \
                   "", \
                   "Neo symbol layer")

// ---------------------------
// Neo symbol layer
#define ___SYMB_NEO_L1___ ___,  _OCDQUOT, _UNDS,  _OCLBRC, _RBRC, _CIRC_ND
#define ___SYMB_NEO_L2___ ___,  _SLSH,  _MINS,  _OCLCBR, _RCBR, _ASTR
#define ___SYMB_NEO_L3___ ___,  _HASH,  _DLR,   _PIPE, _TILD_ND, _OCGRV

#define ___SYMB_NEO_R1___ _EXLM, _LT,    _GT,    _EQL,  _AMPR
#define ___SYMB_NEO_R2___ _QUES, _OCPRN, _RPRN , _QUOT, _COLN
#define ___SYMB_NEO_R3___ _PLUS, _PERC,  _BSLS,  _AT,   ___

carte_de_MAP("\"_[]^  !<>=&",                 \
               "/-{}*  ?()':",                  \
               "#$|~`  +%\@")

LAYER_MAP(                                     \
  CHUNK_LANG_MAP(___SYMB_NEO_L1___, ___SYMB_NEO_R1___,          \
                 ___SYMB_NEO_L2___, ___SYMB_NEO_R2___,          \
                 ___SYMB_NEO_L3___, ___SYMB_NEO_R3___))

#endif
