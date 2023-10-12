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

#ifdef QWERTY_ENABLE

LAYER_NAME(QWERTY, "Qwerty", \
                   "", \
                   "")

carte_de_MAP("   qwert  yuiop",               \
             "   asdfg  hjkl;",               \
             "   zxcvb  nm,./")

// Need TLKC around comm, dot, and quot, and scln
// Qwerty based layers that I don't really use.
LAYER_MAP(
  LANG_MAP(_Q, _W, _E, _R, _T, _Y,  _U,  _I,    _O,   _P,           \
           _A, _S, _D, _F, _G, _H,  _J,  _K,    _L,   _SCLN,      \
           _Z, _X, _C, _V, _B, _N,  _M,  _COMM, _DOT, _SLSH))

#endif

#ifdef AZERTY_ENABLE

LAYER_NAME(AZERTY, "Azerty", \
                   "", \
                   "")

carte_de_MAP("   azert  yuiop",               \
             "   qsdfg  hjkl;",               \
             "   wxcvb  nm,./")

// Need TLKC around comm, dot, and quot, and scln
// Qwerty based layers that I don't really use.
LAYER_MAP(
  LANG_MAP(_A, _Z, _E, _R, _T, _Y,  _U,  _I,    _O,   _P,           \
           _Q, _S, _D, _F, _G, _H,  _J,  _K,    _L,   _SCLN,      \
           _W, _X, _C, _V, _B, _N,  _M,  _COMM, _DOT, _SLSH))

#endif

#ifdef WORKMAN_ENABLE

LAYER_NAME(WORKMAN, "Workman", \
                   "", \
                   "")

carte_de_MAP("   qdrwb  jfup;",               \
             "   ashtg  yneio",               \
             "   zxmcv  kl,./")

LAYER_MAP(
  LANG_MAP(_Q, _D, _R, _W, _B,   _J, _F, _U,    _P,   _SCLN,        \
           _A, _S, _H, _T, _G,   _Y, _N, _E,    _O,   _I,           \
           _Z, _X, _M, _C, _V,   _K, _L, _COMM, _DOT, _SLSH))

#endif

#ifdef NORMAN_ENABLE

LAYER_NAME(NORMAN, "Norman", \
                   "", \
                   "")

carte_de_MAP("   qwdfk  jurl;",               \
             "   asetg  yniou",               \
             "   zxcvb  pm,./")

LAYER_MAP(
  LANG_MAP(_Q, _W, _D, _F, _K,   _J, _U, _R,    _L,   _SCLN,      \
           _A, _S, _E, _T, _G,   _Y, _N, _I,    _O,   _U,           \
           _Z, _X, _C, _V, _B,   _P, _M, _COMM, _DOT, _SLSH))

#endif
