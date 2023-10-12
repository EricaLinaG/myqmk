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
#include "custom_keycodes.h"
/*******************************************************************/
/* A Top Rows layer.  Pick your parts.  Bepo and Qwerty            */
/*                                                                 */
/* This is, to me, a stop gap layer. If I need symbols, numbers or */
/* function keys these rows are nicely predictable to most people. */
/* I currently use the beakl number row with regular symbols.      */
/* I never use function keys for anything.                         */
/*******************************************************************/

/********************************************************************************/
/* TOPROWS Layer chunk                                                          */
/********************************************************************************/

#ifdef RAISE_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(RAISE, \
                   "Raise", \
                   "", \
                   "Raise: numbers, punctuation, Function keys.")

carte_de_MAP("   !@#$%  ^&*()",               \
               "   12345  67890",               \
               "   F1-  -- -F10")

LAYER_MAP(                        \
  ___10_SYMBOLS___,                             \
    ___10_NUMBERS___,                           \
    ___10_FUNCS___)

#endif

#ifdef TOPROWS_BEAKL15_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(TOPROWS_BEAKL15, \
                   "Toprows Beakl 15", \
                   "", \
                   "Beakl numbers, punctuation, Function keys.")

// These rows have already been langed, at their creation.
// altogether in a chunk.
carte_de_MAP("   !@#$%  ^&*()",               \
               "   40123  76598",               \
               "   F1-  -- -F10")

LAYER_MAP(               \
  ___10_SYMBOLS___,                             \
    ___10_NUMBERS_BEAKL15___,                   \
    ___10_FUNCS___)

#endif

#ifdef TOPROWS_BEAKL15_MOD_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(TOPROWS_BEAKL15_MOD, \
                   "Toprows Beakl 15 Mods", \
                   "", \
                   "Beakl numbers, punctuation, SL and OS Mods.")

carte_de_MAP("   !@#$%  ^&*()",               \
               "   40123  76598",               \
               "  SLMods  OSMods")

LAYER_MAP(                  \
  ___10_SYMBOLS___,                             \
    ___10_NUMBERS_BEAKL15___,                   \
    ___MODS_ROW___)

#endif

#ifdef TOPROWS_JOHNM_MODS_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(TOPROWS_JOHNM_MOD, \
                   "Toprows John 15 Mods", \
                   "", \
                   "Johnm numbers, punctuation, SL and OS Mods.")


carte_de_MAP("   !@#$%  ^&*()",               \
               "   84236  71059",               \
               "  SLMods  OSMods")

LAYER_MAP(            \
  ___10_SYMBOLS___,                             \
    ___10_NUMBERS_JOHNM___,                     \
    ___MODS_ROW___)

#endif


#ifdef TOPROWS_JOHNM2_MODS_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(TOPROWS_JOHNM2_MOD, \
                   "Toprows John 15 Mods", \
                   "", \
                   "Johnm numbers, punctuation, SL and OS Mods.")


carte_de_MAP("   !@#$%  ^&*()",               \
               "   65238  91047",               \
               "  SLMods  OSMods")

LAYER_MAP(           \
  ___10_SYMBOLS___,                             \
    ___10_NUMBERS_JOHNM2___,                    \
    ___MODS_ROW___)

#endif

#ifdef TOPROWS_BEAKL19_LAYER_ENABLE

// Layer name, definition, text name, text map.
LAYER_NAME(TOPROWS_BEAKL19, \
                   "Toprows Beakl 19", T\
                   "", \
                   "Beakl 19 numbers, punctuation, Function keys.")

carte_de_MAP("   !@#$%  ^&*()",               \
               "   32104  76598",               \
               "   F1-  -- -F10")

LAYER_MAP(                \
  ___10_SYMBOLS___,                             \
    ___10_NUMBERS_BEAKL19___,                   \
    ___10_FUNCS___)
#endif
