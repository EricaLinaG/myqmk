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

#ifdef _BEAKL27_LAYER_ENABLE

LAYER_NAME(BEAKL27, "Beakl 27", \
                   "", \
                   "")

carte_de_MAP(" qhoux gcmrz ",                 \
             " yiea. dstnb ",                 \
             " j\",k' wflpv ")

// Alt target is BK
// altered shifted pairs: quot = '`  comma = ,!   dot = .@
LAYER_MAP(
  LANG_MAP(_Q, _H,        _O,        _U, _X,        _G, _C, _M, _R, _Z,       \
           _Y, _I,        _E,        _A, _BK2_DOT,  _D, _S, _T, _N, _B,       \
           _J, _BK2_DQUO, _BK2_COMM, _K, _BK2_QUOT, _W, _F, _L, _P, _V))
#endif

#ifdef _BEAKL27A_LAYER_ENABLE

LAYER_NAME(BEAKL27A, "Beakl 27A", \
                   "", \
                   "")

carte_de_MAP(" j\",k' gcmrz ",                 \
             " yiea. dstnb ",                  \
             " qhoux wflpv ")

// Alt target is BK
// altered shifted pairs: quot = '`  comma = ,!   dot = .@
LAYER_MAP(
  LANG_MAP(_J, _BK2_DQUO, _BK2_COMM, _K, _BK2_QUOT, _G, _C, _M, _R, _Z,       \
           _Y, _I,        _E,        _A, _BK2_DOT,  _D, _S, _T, _N, _B,       \
           _Q, _H,        _O,        _U, _X,        _W, _F, _L, _P, _V))

#endif

#ifdef _BEAKL15_LAYER_ENABLE

LAYER_NAME(BEAKL15, "Beakl 15", \
                   "", \
                   "")

/* BEAKL 15 (main layer): */
/*   40123 76598   */
carte_de_MAP(" qhoux gcrfz ",                 \
             " yiea. dstnb ",                 \
             " j/,k' wmlpv ")

// Alt target is BK
LAYER_MAP(
  LANG_MAP(_Q, _H,    _O,       _U, _X,       _G, _C, _R, _F, _Z, \
           _Y, _I,    _E,       _A, _BK_DOT,  _D, _S, _T, _N, _B, \
           _J, _SLSH, _BK_COMM, _K, _BK_QUOT, _W, _M, _L, _P, _V))
#endif

#ifdef _BEAKL19_LAYER_ENABLE

/* BEAKL 19    */
// Beakl 19.  scores better than 15, better in french also.
// Both are lots better than dvorak or bepo.

/* same symbols and keypad as 15 */
/* number row is different */
/*  32104 76598  */

// Alt target is BK
LAYER_NAME(BEAKL19, "Beakl 19", \
                   "", \
                   "")

carte_de_MAP(" q.ouj wdnm, ",                 \
             " haeik gsrtp ",                 \
             " z'/yx bclfv ")

LAYER_MAP(
  LANG_MAP(_Q, _DOT,  _O,    _U, _J, _W,    _D, _N, _M, _BK_COMM,        \
           _H, _A,    _E,    _I, _K, _G,    _S, _R, _T, _P,             \
           _Z, _QUOT, _SLSH, _Y, _X, _B,    _C, _L, _F, _V))

#endif

#ifdef _BEAKL19BIS_LAYER_ENABLE

LAYER_NAME(BEAKL19bis, "Beakl 19 bis", \
                   "", \
                   "French optimised 3x12")

carte_de_MAP(" àqyoué  wdnck^ ",              \
             " ;hiea,  gtrsp- ",              \
             " zj'è.x  vmlfbê  ")

LAYER_MAP(
  LANG_MAP6(                                                            \
            _AGRV, _Q, _Y,    _O,    _U,   _EACU,   _W, _D, _N, _C, _K, _DCIR, \
            _SCLN, _H, _I,    _E,    _A,   _COMM,   _G, _T, _R, _S, _P, _MINS, \
            _Z,    _J, _QUOT, _EGRV, _DOT, _X,      _V, _M, _L, _F, _B, _ECIR))

#endif

#ifdef _BEAKLWI_LAYER_ENABLE

// Beakl Wi.   This is the most current beakl this size. 18/01/2022.
// Nothing on the 6th outer columns but layer toggle buttons. All 6.
// altered shifted pairs: dot = .` comma = ,~  colon = :;
// i is on the left thumb.
/* ;you- ctrsv */
/* qheaw gdnmz */
/* j,.k' bplfx */
/*    i        */

LAYER_NAME(BEAKLWI, "Beakl WI", \
                    "",          \
                    "i on left thumb")

carte_de_MAP(" ;you- ctrsv ",                 \
             " qheaw gdnmz ",                 \
             " j,.k' bplfx i")

LAYER_MAP(
  LANG_MAP(_BKW_COLN, _Y,        _O,       _U, _MINS,   _C, _T, _R, _S, _V,   \
           _Q,        _H,        _E,       _A, _W,      _G, _D, _N, _M, _Z,   \
           _J,        _BKW_COMM, _BKW_DOT, _K, _QUOT,   _B, _P, _L, _F, _X))


// Thumbs.
#define ___BEAKLWI_CRKBD_THUMBS___ LT_ESC, LT_I, LT_TAB,  LT_ENT, LT_SPC, LT_BSPC

#endif

#ifdef _BEAKLWIa_LAYER_ENABLE

// My version, loses KC_mins, because it's easier on my symbol layer.
// put I in it's dvorak spot instead of thumbs, move W up to make room for I.
// I'd rather have w and i on different fingers. One domino...

// beakl-wi - mod iw-

LAYER_NAME(BEAKLWIa, "Beakl WIa", \
                   "", \
                   "No alpha on thumb.")

carte_de_MAP(" ;youw ctrsv ",                 \
             " qheai gdnmz ",                 \
             " j,.k' bplfx ")

// Alt target is BKW
LAYER_MAP(
  LANG_MAP(_BKW_SCLN, _Y,        _O,       _U, _W,      _C, _T, _R, _S, _V,   \
           _Q,        _H,        _E,       _A, _I,      _G, _D, _N, _M, _Z,   \
           _J,        _BKW_COMM, _BKW_DOT, _K, _QUOT,   _B, _P, _L, _F, _X))

#ifdef _BEAKLWIb_LAYER_ENABLE

LAYER_NAME(BEAKLWIb, "Beakl WIb", \
                   "", \
                   "No alpha on thumb.")

carte_de_MAP(" j,.k' ctrsv ",                 \
             " qheai gdnmz ",                 \
             " ;youw bplfx ")

// Alt target is BKW
LAYER_MAP(
  LANG_MAP(_J,        _BKW_COMM, _BKW_DOT, _K, _QUOT, _C, _T, _R, _S, _V,     \
           _Q,        _H,        _E,       _A, _I,    _G, _D, _N, _M, _Z,   \
           _BKW_SCLN, _Y,        _O,       _U, _W,    _B, _P, _L, _F, _X))
#endif
