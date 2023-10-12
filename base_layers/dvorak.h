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

#ifdef _DVORAK_LAYER_ENABLE

LAYER_NAME(DVORAK, "Dvorak", \
                   "",
                   "")

carte_de_MAP(" ',.py fgcrl ",                 \
             " aoeui dhtns ",                 \
             " ;qjkx bmwvz ")

LAYER_MAP(
  LANG_MAP(_QUOT,  _COMM, _DOT, _P,  _Y,   _F, _G, _C, _R, _L,    \
           _A,     _O,    _E,   _U,  _I,   _D, _H, _T, _N, _S,    \
           _SCLN,  _Q,    _J,   _K,  _X,   _B, _M, _W, _V, _Z))
#endif

#ifdef _DVORAK_RLC_IU_LAYER_ENABLE

LAYER_NAME(DVORAK_RLC_IU, \
                  "Dvorak RLC IU", \
                   "", \
                   "Swap RLC and UI")

carte_de_MAP(" ',.py frglc ",                 \
             " aoeiu dhtns ",                 \
             " ;qjkx bmwvz ")

LAYER_MAP(
  LANG_MAP(_QUOT,  _COMM, _DOT, _P,  _Y,   _F, _R, _G, _L, _C,    \
           _A,     _O,    _E,   _I,  _U,   _D, _H, _T, _N, _S,    \
           _SCLN,  _Q,    _J,   _K,  _X,   _B, _M, _W, _V, _Z))

#endif

#ifdef _BOO_LAYER_ENABLE

LAYER_NAME(BOO, "Boo", \
                "", \
                "")

carte_de_MAP("  ,.ucv  qfdly",                \
             "  aoesg  bntri",                \
             "  ;x'wz  phmkj")

LAYER_MAP(
  LANG_MAP( _COMM, _DOT, _U,    _C, _V,   _Q, _F, _D, _L, _Y,     \
            _A,    _O,   _E,    _S, _G,   _B, _N, _T, _R, _I,     \
            _SCLN, _X,   _QUOT, _W, _Z,   _P, _H, _M, _K, _J))

#endif

#ifdef _CAPEWELL_DVORAK_LAYER_ENABLE

LAYER_NAME(CAPEWELL_DVORAK, \
                   "CAPEWELL_Dvorak", \
                   "", \
                   "")

carte_de_MAP( "  ',.py  qfgrk",               \
              "  oaeiu  dhtns",               \
              "  zxcvj  lmwb;")

LAYER_MAP(
  LANG_MAP(_QUOT, _COMM, _DOT, _P, _Y,  _Q, _F, _G, _R, _K,      \
           _O,    _A,    _E,   _I, _U,  _D, _H, _T, _N, _S,      \
           _Z,    _X,    _C,   _V, _J,  _L, _M, _W, _B, _SCLN))


#endif

#ifdef _AHEI_LAYER_ENABLE

//ahei - derived from dvorak.
// x moved to left side. j on pinky.
/*;pouyq gdlm/= */
/* ahei, fstnr- */
/* j'k.x bcwvz */

LAYER_NAME(AHEI, "AHEI", \
                   "", \
                   "")

carte_de_MAP("pouyq  gdlm/",                  \
             "ahei,  fstnr",                  \
             "j'k.x  bcwvz")

LANG_MAP(_P, _O,    _U, _Y,   _Q,     _G, _D, _L, _M, _SLSH, \
         _A, _H,    _E, _I,   _COMM,  _F, _S, _T, _N, _R,      \
         _J, _QUOT, _K, _DOT, _X,     _B, _C, _W, _V, _Z))

#endif
