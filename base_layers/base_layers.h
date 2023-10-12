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
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "custom_keycodes.h"
#include "lang_map.h"
#include "oled_stuff.h"

// An empty keymap layer template.

#ifdef _EMPTY_LAYER_ENABLE

// Layer name,
// text name,
// url,
// note,
// text map,
// definition,
LAYER_NAME(EMPTY, "Empty",           \
                 https://empty,     \
                 "this is a note")

carte_de_MAP("  ",               \
             "  ",               \
             "  ")

LAYER_MAP(
   LANG_MAP(_, _, _, _, _,   _, _, _, _, _,      \
            _, _, _, _, _,   _, _, _, _, _,      \
            _, _, _, _, _,   _, _, _, _, _))


#endif

// dvorak, capewell-dvorak, ahei, and boo.
#include "dvorak.h"
//qwerty, workman, norman,
#include "qwerty.h"
// Colemak, halmak, minimak, etc.
#include "maks.h"
// eucalyn, maltron
#include "alt.h"
// mtgap, ctgap, apt
#include "gap.h"
// some hands down.
#include "hands_down.h"
// some beakls.
#include "beakl.h"
// bepo, optimot, beakl19bis, godox-fr?.
#include "bepo.h"
// some carpalxs.
#include "carpalx.h"

// Provides all the base layers we have.
// base_layers.h ends here.
