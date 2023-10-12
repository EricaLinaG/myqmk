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

#ifdef _COLEMAK_LAYER_ENABLE

LAYER_NAME(COLEMAK, "Colemak", \
                   "", \
                   "")

carte_de_MAP("   qwfpg  jluy;",               \
             "   arstd  hneio",               \
             "   zxcvb  km,./")

LAYER_MAP(
  LANG_MAP(_Q, _W, _F, _P, _G,    _J, _L,  _U,    _Y,   _SCLN,    \
           _A, _R, _S, _T, _D,    _H, _N,  _E,    _I,   _O,         \
           _Z, _X, _C, _V, _B,    _K, _M,  _COMM, _DOT, _SLSH))

#endif

#ifdef _COLEMAK_DH_LAYER_ENABLE

LAYER_NAME(COLEMAK_DH, "Colemak DH", \
                   "", \
                   "")

carte_de_MAP("   qwfpb  jluy;",               \
             "   arstg  mneio",               \
             "   zxcdv  kh,./")

LAYER_MAP(
  LANG_MAP(_Q, _W, _F, _P, _B,    _J, _L, _U,    _Y,   _SCLN,     \
           _A, _R, _S, _T, _G,    _M, _N, _E,    _I,   _O,          \
           _Z, _X, _C, _D, _V,    _K, _H, _COMM, _DOT, _SLSH))

#endif

#ifdef _HALMAK_LAYER_ENABLE

LAYER_NAME(HALMAK, "Halmak", \
                   "", \
                   "")

carte_de_MAP("  wlrbz  ;qudj",                \
             "  shnt,  .aeoi",                \
             "  fmvc/  gpxky")

LAYER_MAP(
  LANG_MAP(_W, _L, _R, _B, _Z,      _SCLN, _Q, _U, _D, _J,  \
           _S, _H, _N, _T, _COMM,   _DOT,  _A, _E, _O, _I,  \
           _F, _M, _V, _C, _SLSH,   _G,    _P, _X, _K, _Y))

#endif

#ifdef MINIMAK_LAYER_ENABLE

LAYER_NAME(MINIMAK, "Minimak", \
                   "", \
                   "")

carte_de_MAP("  qwdrk  yuiop",                \
             "  astfg  hjel;",                \
             "  zxcvb  nm,./")

LAYER_MAP(
  LANG_MAP(_Q, _W, _D, _R, _K,   _Y, _U, _I,    _O,   _P,           \
           _A, _S, _T, _F, _G,   _H, _J, _E,    _L,   _SCLN,      \
           _Z, _X, _C, _V, _B,   _N, _M, _COMM, _DOT, _SLSH)
\

#endif

#ifdef MINIMAK_8_LAYER_ENABLE

LAYER_NAME(MINIMAK_8, "Minimak 8", \
                   "", \
                   "")

carte_de_MAP("  qwdrk  yuilp",                \
             "  astfg  hneo;",                \
             "  zxcvb  jm,./")

LAYER_MAP(
  LANG_MAP(_Q, _W, _D, _R, _K,   _Y, _U, _I,    _L,   _P,           \
           _A, _S, _T, _F, _G,   _H, _N, _E,    _O,   _SCLN,      \
           _Z, _X, _C, _V, _B,   _J, _M, _COMM, _DOT, _SLSH))


#endif

#ifdef MINIMAK_12_LAYER_ENABLE

LAYER_NAME(MINIMAK_12, \
                   "Minimak 12", \
                   "", \
                   "")

carte_de_MAP("  qwdfk  yuil;",                \
             "  astrg  hneop",                \
             "  zxcvb  jm,./")

LAYER_MAP(
  LANG_MAP(_Q, _W, _D, _F, _K,   _Y, _U, _I,    _L,   _SCLN,        \
           _A, _S, _T, _R, _G,   _H, _N, _E,    _O,   _P,           \
           _Z, _X, _C, _V, _B,   _J, _M, _COMM, _DOT, _SLSH))


#endif

#ifdef _SEMIMAK_JQ_LAYER_ENABLE

LAYER_NAME(SEMIMAK_JQ, \
                   "Semimak_JQ",
                   "", \
                   "")

carte_de_MAP( "  flhvz  'wuoy",               \
              "  srntk  cdeai",               \
              "  xjbmq  pg,./")

LAYER_MAP(
  LANG_MAP(_F, _L, _H, _V, _Z,   _QUOT, _W, _U,    _O,   _Y,               \
           _S, _R, _N, _T, _K,   _C,    _D, _E,    _A,   _I,                    \
           _X, _J, _B, _M, _Q,   _P,    _G, _COMM, _DOT, _SLSH))


#endif

#ifdef SEMIMAK_LAYER_ENABLE

LAYER_NAME(SEMIMAK,  \
                   "Semimak",  \
                   "", \
                   "")

carte_de_MAP( "  flhvz  qwuoy",                \
              "  srntk  cdeai",                \
              "  x'bmj  pg,./")

LAYER_MAP(
  LANG_MAP(_F, _L,    _H, _V, _Z,  _Q, _W, _U,    _O,   _Y,                 \
           _S, _R,    _N, _T, _K,  _C, _D, _E,    _A,   _I,                 \
           _X, _QUOT, _B, _M, _J,  _P, _G, _COMM, _DOT, _SLSH))

#endif

#ifdef _APTMAK_30_LAYER_ENABLE

LAYER_NAME(APTMAK_30, \
                   "Aptmak 30", \
                   "", \
                   "E on right thumb")

// APTMAP E on thumb.
carte_de_MAP( "  ;wfpb  qluy'",               \
              "  rsthk  jnaio",               \
              "  xcgdv  zm,./  e")

LAYER_MAP(
  LANG_MAP(_SCLN, _W, _F, _P, _B,    _Q, _L, _U,    _Y,   _QUOT,       \
           _R,    _S, _T, _H, _K,    _J, _N, _A,    _I,   _O,            \
           _X,    _C, _D, _M, _V,    _P, _G, _COMM, _DOT, _SLSH))

#endif

#ifdef _APTMAK_LAYER_ENABLE

LAYER_NAME(APTMAK, \
                   "Aptmak", \
                   "",
                   "E on right thumb")

carte_de_MAP( "  /wfpb  jluy'",               \
              "  rsthk  vnaio",               \
              "  xcgdq  zm,.;  e")

LAYER_MAP(
  LANG_MAP(_SLSH, _W, _F, _P, _B,      _J, _L, _U,    _Y,   _QUOT,       \
           _R,    _S, _T, _H, _K,      _V, _N, _A,    _I,   _O,            \
           _X,    _C, _G, _D, _Q,      _Z, _M, _COMM, _DOT, _SCLN))


#endif

#ifdef _APTMAK_ALT_LAYER_ENABLE


LAYER_NAME(APTMAK_ALT, \
                   "Aptmak alternate", \
                   "", \
                   "E on right thumb, combos for jqz.")

// aptmak twist from @GNU on HD.
// Needs combos for jqz.
// repeat ⟳ key goes where SLSH is.
carte_de_MAP( "  /wfpk  xluy'",               \
              "  crstb  vnaio",               \
              "   cgd    h,.   e")

LAYER_MAP(
  LANG_MAP(_SLSH, _W, _F, _P, _K,      _X,  _L, _U,    _Y,   _QUOT,       \
           _C,    _R, _S, _T, _B,      _V,  _N, _A,    _I,   _O,            \
           _NO,   _C, _G, _D, _NO,     _NO, _H, _COMM, _DOT, _NO))

#endif
