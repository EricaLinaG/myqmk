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

#ifdef _CARPALX_QFMLWY_LAYER_ENABLE

LAYER_NAME(CARPALX_QFMLWY, \
                   "Carpalx QFMLWY", \
                   "", \
                   "Carpalx")

carte_de_MAP("   qfmlw  yuobj",               \
             "   dstnr  iaeh;",               \
             "   zvgcx  pk,./")

LAYER_MAP(
  LANG_MAP(_Q, _F, _M, _L, _W,   _Y, _U, _O,    _B,   _J,           \
           _D, _S, _T, _N, _R,   _I, _A, _E,    _H,   _SCLN,      \
           _Z, _V, _G, _C, _X,   _P, _K, _COMM, _DOT, _SLSH))

#endif

#ifdef _CARPALX_QFMLWB_LAYER_ENABLE

LAYER_NAME(CARPALX_QFMLWB,  \
                   "Carpalx QFMLWB",  \
                   "", \
                   "Carpalx")

carte_de_MAP("   qgmlw  byuv;",               \
             "   dstnr  iaeoh",               \
             "   zxcfj  kp,./")

LAYER_MAP(
  LANG_MAP(_Q, _G, _M, _L, _W,   _B, _Y, _U,    _V,   _SCLN,      \
           _D, _S, _T, _N, _R,   _I, _A, _E,    _O,   _H,           \
           _Z, _X, _C, _F, _J,   _K, _P, _COMM, _DOT, _SLSH))

#endif

#ifdef _CARPALX_QGMLWY_LAYER_ENABLE

LAYER_NAME(CARPALX_QGMLWY, \
                   "Carpalx QGMLWY", \
                   "", \
                   "Carpalx")

carte_de_MAP("   qgmlw  yfub;",               \
             "   dstnr  iaeoh",               \
             "   zxcvj  kp,./")

LAYER_MAP(
  LANG_MAP(_Q, _G, _M, _L, _W,   _Y, _F, _U,    _B,   _SCLN,      \
           _D, _S, _T, _N, _R,   _I, _A, _E,    _O,   _H,           \
           _Z, _X, _C, _V, _J,   _K, _P, _COMM, _DOT, _SLSH))

#endif
