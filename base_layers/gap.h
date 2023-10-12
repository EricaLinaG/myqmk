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

#ifdef MTGAP_ENABLE

LAYER_NAME(MTGAP, "Mtgap", \
                   "",
                   "")

carte_de_MAP("   ypouj  kdlcw",               \
             "   inea,  mhtsr",               \
             "   qz/.;  bfgvx")

LAYER_MAP(
  LANG_MAP(_Y, _P, _O,    _U,   _J,      _K, _D, _L, _C, _W,      \
           _I, _N, _E,    _A,   _COMM,   _M, _H, _T, _S, _R,      \
           _Q, _Z, _SLSH, _DOT, _SCLN,   _B, _F, _G, _V, _X))

#endif

#ifdef APT_ENABLE

LAYER_NAME(APT, "Apt", \
          "https://github.com/Apsu/APT" , \
          "Apt v3")

carte_de_MAP("   wgdfb  qluoy",               \
             "   rsthk  jneai ",             \
             "   xcmpv  z,.'/")

LAYER_MAP(
  LANG_MAP(_W, _G, _D, _F, _B,    _Q, _L,    _U,   _O,    _Y,                   \
           _R, _S, _T, _H, _K,    _J, _N,    _E,   _A,    _I,           \
           _X, _C, _M, _P, _V,    _Z, _COMM, _DOT, _QUOT, _SLSH))


#endif

#ifdef CTGAP_ENABLE

LAYER_NAME(CTGAP, "Ctgap", \
                   "", \
                   "")

carte_de_MAP("  vplcf  kuoyj",                \
             "  rntsd  'aeih",                \
             "  zbmgw  x,.;q")

LAYER_MAP(
  LANG_MAP(_V, _P, _L, _C, _F,   _K,    _U,    _O,   _Y,    _J, \
           _R, _N, _T, _S, _D,   _QUOT, _A,    _E,   _I,    _H, \
           _Z, _B, _M, _G, _W,   _X,    _COMM, _DOT, _SCLN, _Q))

#endif

#ifdef CANARY_ENABLE

LAYER_NAME(CANARY, "Canary", \
                   "", \
                   "")

carte_de_MAP( "  wlypb   zfou'",                                 \
              "  crstg   mneia",                                 \
              "  qjvdk   xh/,.")

LAYER_MAP(
  LANG_MAP(_W, _L, _Y, _P, _B, _Z, _F, _O,    _U,    _QUOT,       \
           _C, _R, _S, _T, _G, _M, _N, _E,    _I,    _A,            \
           _Q, _J, _V, _D, _K, _X, _H, _SLSH, _COMM, _DOT))

#endif
