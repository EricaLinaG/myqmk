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

#ifdef _OPTIMOT_LAYER_ENABLE

// OPtimot by @Pyjam.
/*  àjoéb fdl’qxz */
/*  aieu, ptsrn^ç */
/*  êkyè.w gcmhvx */
// -- rearranged z, and ç to get 3x12

LAYER_NAME(OPTIMOT, "Optimot", ,\
                    "", \
                    "French 3x12 by @Pyjam.")

carte_de_MAP(" çàjoéb fdl’qx ",               \
             "  aieu, ptsrn^ ",               \
             " êkyè.w gcmhvz ")

LAYER_MAP(
  LANG_MAP6(                                                            \
            _CCED, _AGRV, _J, _O,    _EACU, _B,   _F, _D, _L, _QUOT, _Q,  _X, \
            _TAB,  _A,    _I, _E,    _U,  _COMM,  _P, _T, _S, _R,    _N,  _DCIR, \
            _ECIR, _K,    _Y, _EGRV, _DOT, _W,    _G, _C, _M, _H,    _V,  _Z))
  ___12_SYMBOLS_BEPO___)
#endif

#ifdef _OPTIMOT_COMPACT_LAYER_ENABLE

LAYER_NAME(OPTIMOT_COMPACT, \
                   "Optimot compact", \
                   "", \
                   "French 3x10. Better than bepo")

// no z or x. combos exist for them.
carte_de_MAP(" àjoéb fdl’q ",                \
             " aieu, ptsrn ",                \
             " kyè.w gcmhv ")

LAYER_MAP(
  LANG_MAP6(                                                           \
            _AGRV, _J, _O,    _EACU, _B,     _F, _D, _L, _QUOT, _Q,    \
            _A,    _I, _E,    _U,    _COMM,  _P, _T, _S, _R,    _N,    \
            _K,    _Y, _EGRV, _DOT,  _W,     _G, _C, _M, _H,    _V,))
  ___10_SYMBOLS_BEPO___)

#endif

#ifdef _BEPO_COMPACT_LAYER_ENABLE

// Maybe Use this for C
//BP_C_CCED = MT(BP_CCED, BP_C)

// BEPO

// No quot, à or ç
/* bépoè vdljz */
/* auie, ctsrn */
/* myx.k qghfw */

LAYER_NAME(BEPO_COMPACT, \
                   "Bepo compact", \
                   "", \
                   "French Bepo 3x10, No quot, à or ç."))

carte_de_MAP("   bépoè  vdljz",               \
             "   auie,  ctsrn",               \
             "   myx.k  qghfw", \

LAYER_MAP(
  LANG_MAP(                                                     \
           _B, _EACU, _P, _O,   _EGRV,    _V, _D, _L, _J, _Z,   \
           _A, _U,    _I, _E,   _COMM,    _C, _T, _S, _R, _N,   \
           _M, _Y,    _X, _DOT, _K,       _Q, _G, _H, _F, _W))
  ___10_SYMBOLS_BEPO___)


#endif

#ifdef _BEPO_LAYER_ENABLE

LAYER_NAME(BEPO, "BEPO", \
                 "", \
                 "French Bepo 3x12.")

carte_de_MAP(" çbépoè ^vdljz ",               \
             "  auie, ctsrnm ",               \
             " êàyx.k ’qghfw ")

LAYER_MAP(
  LANG_MAP6(_CCED, _B,    _EACU, _P, _O,   _EGRV,    _DCIR, _V, _D, _L, _J, _Z, \
            _TAB,  _A,    _U,    _I, _E,   _COMM,    _C,    _T, _S, _R, _N, _M, \
            _ECIR, _AGRV, _Y,    _X, _DOT, _K,       _QUOT, _Q, _G, _H, _F, _W))

  ___12_SYMBOLS_BEPO___)
#endif
