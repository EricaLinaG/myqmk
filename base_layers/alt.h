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

// Layer for combo reference. Make more than one by changing lang is.
#define ___COMBO_REF___                                                 \
LAYER_MAP(
  LANG_MAP(_1L1,  _1L2, _1L3, _1L4,  _1L5,   _1R1, _1R2, _1R3, _1R4, _1R5, \
           _2L1,  _2L2, _2L3, _2L4,  _2L5,   _2R1, _2R2, _2R3, _2R4, _2R5, \
           _3L1,  _3L2, _3L3, _3L4,  _3L5,   _3R1, _3R2, _3R3, _3R4, _3R5)

#ifdef _MALTRON_LAYER_ENABLE

LAYER_NAME(MALTRON, "Maltron",                   \
                   "",                          \
                   "e goes on left thumb")

carte_de_map("   qpycb  vmuzl",               \
             "   anisf  ctdor",               \
             "   ;/jg,  .wk-x e")

LAYER_MAP(
  LANG_MAP(_Q,     _P,    _Y, _C, _B,       _V,   _M, _U, _Z,    _L, \
           _A,     _N,    _I, _S, _F,       _D,   _T, _D, _O,    _R, \
           _SCLN,  _SLSH, _J, _G, _COMM,    _DOT, _W, _K, _MINS, _X))

#endif

#ifdef _EUCALYN_LAYER_ENABLE

LAYER_NAME(EUCALYN, "Eucalyn",
                   "", \
                   "")

carte_de_MAP("   /,.fq  aoeiu",               \
             "   zxcvw  mrdyp",               \
             "   gtksn  bhjl;")

LAYER_MAP(
  LANG_MAP(_SLSH, _COMM, _DOT, _F, _Q,   _A, _O, _E, _I, _U,      \
           _Z,    _X,    _C,   _V, _W,   _M, _R, _D, _Y, _P,      \
           _G,    _T,    _K,   _S, _N,   _B, _H, _J, _L, _SCLN))


#endif

#ifdef _RSTHD_LAYER_ENABLE


// RSTHD
/* j c y f k | z l , u q = */
/* r s t h d | m n a i o - */
/* / v g p b | x w . ; ' */
/* e */

// need a thumb cluster for this.
// removed = and -, edge keys if you've got them.
// e goes on left thumb

LAYER_NAME(RSTHD, "Rsthd",
                   "", \
                   "E on left thumb")

carte_de_MAP("   jcyfk  zl,uq",             \
             "   rsthd  mnaio",             \
             "   /vgpb  xw.;' e")

LAYER_MAP(
  LANG_MAP(_J, _C, _Y, _F, _K,   _Z, _L, _COMM, _U,    _Q,          \
           _R, _S, _T, _H, _D,   _M, _N, _A,    _I,    _O,          \
           _/, _V, _G, _P, _B,   _X, _W, _DOT,  _SCLN, _QUOT))


#endif

#ifdef _HANDS_UP_LAYER_ENABLE

LAYER_NAME(HANDS_UP, "Hands_up", \
                   "", \
                   "")

carte_de_MAP("  fyou,  kwclp",          \
             "  hiea.  dtsrn",          \
             "  bj'z;  vmgxq")

LAYER_MAP(
  LANG_MAP(_F, _Y, _O,    _U, _COMM,   _K, _W, _C, _L, _P, \
           _H, _I, _E,    _A, _DOT ,   _D, _T, _S, _R, _N, \
           _B, _J, _QUOT, _Z, _SCLN,   _V, _M, _G, _X, _Q))


#endif

#ifdef _WHITE_LAYER_ENABLE

LAYER_NAME(WHITE, "White", \
                   "", \
                   "")

carte_de_MAP("  vyd,'  jmlu-",                \
             "  atheb  csnoi",                \
             "  pkgwq  xrf.z")

LAYER_MAP(
  LANG_MAP(_V, _Y, _D, _COMM, _QUOT,   _J, _M, _L, _U,   _MINS,   \
           _A, _T, _H, _E,    _B,      _C, _S, _N, _O,   _I,      \
           _P, _K, _G, _W,    _Q,      _X, _R, _F, _DOT, _Z))


#endif

#ifdef _ISRT_LAYER_ENABLE

LAYER_NAME(ISRT, "Isrt", \
                 "", \
                 "")

carte_de_MAP("  yclmk  zfu,'",                \
             "  isrtg  pneao",                \
             "  qvwdj  bh/.x")

LAYER_MAP(
  LANG_MAP(_Y, _C, _L, _M, _K,   _Z, _F, _U,      _COMM, _QUOT,     \
           _I, _S, _R, _T, _G,   _P, _N, _E,      _A,    _O,          \
           _Q, _V, _W, _D, _J,   _B, _H, _SLSH,   _DOT,  _X))

#endif

#ifdef _SOUL_LAYER_ENABLE

LAYER_NAME(SOUL, "Soul", \
                 "", \
                 "")

carte_de_MAP("  qwldp  kmuy;",                \
             "  srtg   fneio",                \
             "  zxcvj  bh,./")

LAYER_MAP(
  LANG_MAP(_Q, _W, _L, _D, _P,   _K, _M, _U,      _Y,     _SCLN,      \
           _A, _S, _R, _T, _G,   _F, _N, _E,      _I,     _O,           \
           _Z, _X, _C, _V, _J,   _B, _H, _COMM, _DOT, _SLSH))

#endif

#ifdef _NIRO_LAYER_ENABLE

LAYER_NAME(NIRO, "Niro", \
                 "", \
                 "")

carte_de_MAP("  qwudp  jfyl;",                \
             "  asetg  hniro",                \
             "  zxcvb  km,./")

LAYER_MAP(
  LANG_MAP(_Q, _W, _U, _D, _P,   _J, _F, _Y,      _L,     _SCLN,      \
           _A, _S, _E, _T, _G,   _H, _N, _I,      _R,     _O,           \
           _Z, _X, _C, _V, _B,   _K, _M, _COMM,   _DOT,   _SLSH))

#endif

#ifdef _ASSET_LAYER_ENABLE

LAYER_NAME(ASSET, "Asset", \
                  "", \
                  "")

carte_de_MAP("  qwjfg   ypul;",               \
             "  asetd   hnior",               \
             "  zxcvb   km,./")

LAYER_MAP(
  LANG_MAP(_Q, _W, _J, _F, _G,    _Y, _P, _U,      _L,     _SCLN,     \
           _A, _S, _E, _T, _D,    _H, _N, _I,      _O,     _R,          \
           _Z, _X, _C, _V, _B,    _K, _M, _COMM,   _DOT,   _SLSH))

#endif

#ifdef _WHORF_LAYER_ENABLE

LAYER_NAME(WHORF, "WHorf", \
                  "", \
                  "")

carte_de_MAP("flhdm  vwou,",                  \
             "srntk  gyaei",                  \
             "xjbzq  pc';. ")

LAYER_MAP(
  LANG_MAP(_F, _L, _H, _D, _M,   _V, _W, _O,      _U,      _COMM,    \
           _S, _R, _N, _T, _K,   _G, _Y, _A,      _E,      _I,         \
           _X, _J, _B, _Z, _Q,   _P, _C, _QUOT,   _SCLN,   _DOT ))

#endif

#ifdef _WHORF6_LAYER_ENABLE

LAYER_NAME(WHORF6, "Whorf 6", \
                   "", \
                   "")

carte_de_MAP("vlhkj  gwou.",                  \
             "srntk  ydeai",                  \
             "xqbfz  pc',; ")

LAYER_MAP(
  LANG_MAP(_V, _L, _H, _D, _M,   _G, _W, _O,      _U,    _DOT,      \
           _S, _R, _N, _T, _K,   _Y, _D, _E,      _A,    _I,          \
           _X, _Q, _B, _F, _Z,   _P, _C, _QUOT,   _COMM, _SCLN ))

#endif

/* rsht/iena */
/* jfldv @uopq */
/* zrshtg   .iena: */
/* xcmwk  /y,b?       */

#ifdef _PINE_LAYER_ENABLE

LAYER_NAME(PINE, "Pine", \
                 "", \
                 "")

carte_de_MAP("ylrdw  jmou,  ",        \
             "csntg  phaei  ",        \
             "xzqvk  bf'/.  ")

LAYER_MAP(
  LANG_MAP( _Y, _L, _R, _D, _W, _J, _M, _O,    _U,    _COMM,                \
            _C, _S, _N, _T, _G, _P, _H, _A,    _E,    _I,                     \
            _X, _Z, _Q, _V, _K, _B, _F, _QUOT, _SLSH, _DOT  ))

#endif

#ifdef _GRAPHITE_LAYER_ENABLE

/* Graphite
 https://github.com/rdavison/graphite-layout
 ~ ! @ # $ %  ^ & * ( ) { }
   B L D W Z  _ F O U J : + |
   N R T S G  Y H A E I ?
   Q X M C V  K P > " <

 ` 1 2 3 4 5  6 7 8 9 0 [ ]
   b l d w z  ' f o u j ; = \
   n r t s g  y h a e i ,
   q x m c v  k p . - /
*/
LAYER_NAME(GRAPHITE, "Graphite", \
          "https://github.com/rdavison/graphite-layout", \
          "")

carte_de_MAP("bldwz  'fouj",         \
             "nrtsg  yhaei" ,        \
             "qqmcv  kp.-/")

LAYER_MAP(
  LANG_MAP(_B, _L, _D, _W, _Z,   _UND, _F, _O,   _U,    _J,     \
           _N, _R, _T, _S, _G,   _Y,   _H, _A,   _E,    _I,     \
           _Q, _X, _M, _C, _V,   _K,   _P, _DOT, _DASH, _SLSH ))

#endif
