/*
  Copyright 2018-2023 Eric Gebhart <e.a.gebhart@gmail.com>

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
#include USERSPACE_H
#include "extensions.h"


// Defines actions for my global custom keycodes.
// Then runs the _keymap's record handier if not processed here
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

#ifdef OLED_CUSTOM_ENABLE
  process_record_user_oled(keycode, record);
#endif

  PROCESS_EXTENSIONS

  switch (keycode) {
    case KC_RESET:
      if (!record->event.pressed) {
        reset_keyboard();
      }
      return false;
      break;

    case KC_SPACETEST:  // test something.
      // default_layer_set(1UL << _BEAKL);
      // tap_code16(LSFT(KC_SPACE));
      break;
  }
return true;
}
