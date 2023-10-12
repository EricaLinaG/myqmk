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

/* alt shift keys "? '!  dash and elan */
/* (< {[  - elan                       */
/* dash has thumbs of ,; and .:        */
/* dash and the rest get these too.    */
/* alt shifts   ;: .& /\* '? "! ,| -+  */
/* COMBOS - z = jg, z=vg, q=uk, q=mp.  */

#ifdef HD_NEU_LAYER_ENABLE

LAYER_NAME(HD_NEU, "HD Neu",
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "")

// The only 3x12 layout. The rest are 3x10.
carte_de_MAP( "  wfmpv  /.q\"'z",            \
              "  rsntb  ,aeihj",             \
              "  xcldg  -uoykK")

LAYER_MAP(
  LANG_MAP(_SML_NAV,   _W, _F, _M, _P, _V, _SLSH, _DOT, _Q, _DQUO, _HD_QUOT, _Z, \
           _TAB,       _R, _S, _N, _T, _B, _HD_COMM, _A, _E, _I, _H, _J, \
           _OS_ACCENT, _X, _C, _L, _D, _G, _HD_MINS, _U, _O, _Y, _K, _SML_KEYPAD))

#endif

#ifdef HD_NEU_LAYER_ENABLE

LAYER_MAP(_HD_NEU_NARROW, "HD Neu N", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "")

// modified to fit 3x10.
// combos for j and z.
carte_de_MAP( "  wfmpv  /.q\"'",             \
              "  rsntb  ,aeih",              \
              "  xcldg  -uoyk")

LAYER_MAP(
LANG_MAP(_W, _F, _M, _P, _V,  _HD_SLSH, _HD_DOT, _Q, _HD_DQUO, _HD_QUOT, \
         _R, _S, _N, _T, _G,  _HD_COMM, _A,      _E, _I,       _H,      \
         _X, _C, _L, _D, _B,  _HD_MINS, _U,      _O, _Y,       _K,      \
         ))

#endif

#ifdef HD_NEU_LAYER_ENABLE

LAYER_NAME(HD_NEU_NARROW_M, "HD Neu NM", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "")

// modified to fit 3x10.
// mirrored.
carte_de_MAP("   '\"q./  vpmfw",               \
             "   hiea,  btnsr",               \
             "   kyou-  gdlcx")

LAYER_MAP(
  LANG_MAP(_HD_QUOT, _HD_DQUO, _Q, _HD_DOT, _HD_SLSH,   _V, _P, _M, _F, _W, \
           _H,       _I,       _E, _A,      _HD_COMM,   _B, _T, _N, _S, _R, \
           _K,       _Y,       _O, _U,      _HD_MINS,   _G, _D, _L, _C, _X))

#endif

#ifdef HD_REF_LAYER_ENABLE

LAYER_NAME(HD_REF, "HD Ref", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "")

carte_de_MAP("    qchpv   kyoj/",             \
             "    rsntg   wueia",             \
             "    xmldb   zf',.")

LAYER_MAP(
  LANG_MAP(_Q, _C, _H, _P, _V,   _K, _Y, _O,       _J,        _HD_SLSH,    \
           _R, _S, _N, _T, _G,   _W, _U, _E,       _I,        _A,         \
           _X, _M, _L, _D, _B,   _Z, _F, _HD_QUOT, _HD_COMM,  _HD_DOT ))


#endif

#ifdef HD_TITANIUM_LAYER_ENABLE

LAYER_NAME(HD_TITANIUM, \
                   "HD Titanium", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "R on left thumb, space on right")

// no z or q, use combos.
carte_de_MAP("  jgmpv  ;./\"' ",              \
             "  csntw  ,aeih ",               \
             "  xfldb  -uoyk  r")

LAYER_MAP(
  LANG_MAP(_J, _G, _M, _P, _V,  _HD_SCLN, _HD_DOT, _HD_SLSH, _HD_DQUO, _HD_QUOT, \
           _C, _S, _N, _T, _W , _HD_COMM, _A,      _E,       _I,       _H, \
           _X, _F, _L, _D, _B , _HD_MINS, _U,      _O,       _Y,       _K))

#endif

#ifdef HD_MITHRIL_LAYER_ENABLE

//Combos.
// z, x on combos. r on thumb.
//Symbol pairs: #_ .: =* /? '" ,; -+

LAYER_NAME(HD_MITHRIL, "HD Mithril", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "R on left thumb, space on right, ZX on combos.")

// no z or q, use combos.
carte_de_MAP("  wpgdz  #.=j' ",              \
             "  cnstk  ,iela ",               \
             "  ybfmv  /uoh-  r")

LAYER_MAP(
  LANG_MAP(_W, _P, _G, _D, _Z,  _HDV_SCLN, _HDV_DOT, _HDV_EQL, _J, _HDV_QUOT, \
           _C, _N, _S, _T, _K , _HDV_COMM, _I,       _E,       _L, _A, \
           _Y, _B, _F, _M, _V , _HDV_SLSH, _U,       _O,       _H, _HDV_MINS))

#endif

#ifdef HD_VIBRANIUM_LAYER_ENABLE

//Combos.
//WX for Z,
//XG  for Qu, hold to delete the u._
//Symbol pairs: #_ .: =* /? '" ,; -+

LAYER_NAME(HD_VIBRANIUM,  \
                   "HD Vibranium",  \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "R on left thumb, space on right, ZQ on combos")

// no z or q, use combos.
carte_de_MAP("  wxmgj  ;.=/' ",              \
             "  csntk  ,aeih ",               \
             "  pfldv  -uoyb  r")

LAYER_MAP(
  LANG_MAP(_W, _X, _M, _G, _J, _HDV_SCLN, _HDV_DOT, _HDV_EQL, _HDV_SLSH, _HDV_QUOT, \
           _C, _S, _N, _T, _K, _HDV_COMM, _A, _E, _I, _H,                \
           _P, _F, _L, _D, _V, _HDV_MINS, _U, _O, _Y, _B))

#endif

#ifdef HD_VIBRANIUM_NT_LAYER_ENABLE

// Move R to right corner displace b, Move b to middle, Move k down,
// swap corners for x and put v there.
// x displaces '.
// q displaces /.

//     vwmgj  ;.=qx
//     scntb  ,aeih
//     fpldk  -uoyr
//        z/

// z and / need a combo or something else.

LAYER_NAME(HD_VIBRANIUM_NT, \
                   "HD Vibranium nt", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "No Alpha on thumb, Z on combos.")

carte_de_MAP("  vwmgj  ;.=qx ",              \
             "  scntb  ,aeih ",               \
             "  fpldk  -uoyr ")

LAYER_MAP(
  LANG_MAP(_W, _X, _M, _G, _J,  _HDV_SCLN, _HDV_DOT, _HDV_EQL, _HDV_SLSH, _HDV_QUOT, \
           _S, _C, _N, _T, _K , _HDV_COMM, _A, _E, _I, _H,                \
           _P, _F, _L, _D, _V , _HDV_MINS, _U, _O, _Y, _B))


#endif

#ifdef HD_VIBRANIUM_NTP_LAYER_ENABLE

LAYER_NAME(HD_VIBRANIUM_NTP, \
                   "HD Vibranium ntp", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "No Alpha on thumb, full punctuation. ZQX on combos.")

// put qx and z on combos. keep ' and /.
carte_de_MAP("  vwmgj  ;.=/' ",              \
             "  scntb  ,aeih ",               \
             "  fpldk  -uoyr ")

LAYER_MAP(
  LANG_MAP(_W, _X, _M, _G, _J,  _HDV_SCLN, _HDV_DOT, _HDV_EQL, _HDV_SLSH, _HDV_QUOT, \
           _S, _C, _N, _T, _K , _HDV_COMM, _A, _E, _I, _H,                \
           _P, _F, _L, _D, _V , _HDV_MINS, _U, _O, _Y, _B))


#endif

#ifdef HD_VIBRANIUM_VF_LAYER_ENABLE

LAYER_NAME(HD_VIBRANIUM_VF, \
                   "HD Vibranium VF", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "R on left thumb, space on right")

carte_de_MAP("  xpmgj  ;.=/' ",              \
             "  scntk  ,aeih ",               \
             "  vfldw  -uoyb  r")

LAYER_MAP(
  LANG_MAP(_X, _P, _M, _G, _J, _HDV_SCLN, _HDV_DOT, _HDV_EQL, _HDV_SLSH, _HDV_QUOT, \
           _S, _C, _N, _T, _K, _HDV_COMM, _A, _E, _I, _H,                \
           _V, _F, _L, _D, _W, _HDV_MINS, _U, _O, _Y, _B))


#endif

#ifdef HD_VIBRANIUM_VP_LAYER_ENABLE

LAYER_NAME(HD_VIBRANIUM_VP, \
                   "HD Vibranium VP", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "R on left thumb, space on right, ZQ on combos")

carte_de_MAP("  xwmgj  ;.=/' ",              \
             "  scntb  ,aeih ",               \
             "  vpldk  -uoyf  r")

LAYER_MAP(
  LANG_MAP(_X, _W, _M, _G, _J,  _HDV_SCLN, _HDV_DOT, _HDV_EQL, _HDV_SLSH, _HDV_QUOT, \
           _S, _C, _N, _T, _B , _HDV_COMM, _A, _E, _I, _H,                \
           _V, _P, _L, _D, _W , _HDV_MINS, _U, _O, _Y, _F))

#endif

#ifdef HD_VIBRANIUM_B_LAYER_ENABLE

LAYER_NAME(HD_VIBRANIUM_B, \
                   "HD Vibranium B", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "R on left thumb, space on right")

carte_de_MAP("  xwmgj  ;.=/' ",              \
             "  csntk  ,aeih ",               \
             "  bpldv  -uoyf  r")

LAYER_MAP(
  LANG_MAP(_X, _W, _M, _G, _J,  _HDV_SCLN, _HDV_DOT, _HDV_EQL, _HDV_SLSH, _HDV_QUOT, \
           _C, _S, _N, _T, _K , _HDV_COMM, _A, _E, _I, _H,                \
           _B, _P, _L, _D, _V , _HDV_MINS, _U, _O, _Y, _F))


#endif

#ifdef HD_RHODIUM_LAYER_ENABLE

LAYER_NAME(HD_RHODIUM, "HD Rhodium", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "R on left thumb, space on right, ZQ on combos.")

carte_de_MAP("  bjhgx  ;./\"' ",              \
             "  csntk  ,aeim ",               \
             "  pfldv  -uoyw  r")

LAYER_MAP(
  LANG_MAP(_W, _V, _M, _G, _EQL,  _HD_SCLN, _HD_DOT, _HD_SLSH, _HD_DQUO, _HD_QUOT, \
           _C, _S, _N, _T, _K ,   _HD_COMM, _A, _E, _I, _M,              \
           _P, _F, _L, _D, _X ,   _HD_MINS, _U, _O, _Y, _W))

#endif

#ifdef HD_RHODIUM_B_LAYER_ENABLE

LAYER_NAME(HD_RHODIUM_B, \
                   "HD Rhodium B", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "R on left thumb, space on right, ZQ on combos.")

carte_de_MAP("  wvmg=  ;./j' ",               \
             "  csntk  ,aeih ",               \
             "  pfldx  -uoyb  r")

LAYER_MAP(
  LANG_MAP(_W, _V, _M, _G, _EQL,  _HD_SCLN, _HD_DOT, _HD_SLSH, _J, _HD_QUOT, \
           _C, _S, _N, _T, _K ,   _HD_COMM, _A,      _E,       _I, _H, \
           _P, _F, _L, _D, _X ,   _HD_MINS, _U,      _O,       _Y, _B))

#endif

#ifdef HD_RHODIUM_C_LAYER_ENABLE

/* // from @exanimo */
/* // qzx on the edges, combos or elsewhere. */
/* carte_de_MAP("  `',.=  jwhv/\\ ",             \ */
/*              " qmeia-  gtnscx ",              \ */
/*              "  kyou;  bdlfpz  r")

/* \ */

LAYER_NAME(HD_RHODIUM_C, \
                   "HD Rhodium C", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "R on left thumb, space on right, ZQ on combos.")

carte_de_MAP("  `\".'  jwhv/ ",                \
             "  meia,  gtnsc ",                \
             "  kyou-  bdlfp  r")

LAYER_MAP(
  LANG_MAP(_GRV, _HD_SLASH, _HD_DQUO, _HD_DOT, _EQL,      _J, _W, _H, _J, _V,  \
           _M,   _E,       _I,        _A,      _HD_COMM,  _G, _T, _N, _S, _C, \
           _K,   _Y,       _O,        _U,      _HD_MINS,  _B, _D, _L, _F, _P))


#endif

#ifdef HD_VROOMY_LAYER_ENABLE

LAYER_NAME(HD_VROOMY, \
                   "HD Vroomy", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "T on left thumb, space on right")

carte_de_MAP("  xflb'  ;.=jv ",               \
             "  csndk  ,aeir ",               \
             "  wghp/  -uoym  t")

LAYER_MAP(
  LANG_MAP(_X, _F, _L, _B, _HD_QUOT,  _HD_SCLN, _HD_DOT, _EQL, _J, _V,     \
           _C, _S, _N, _D, _K,        _HD_COMM, _A,      _E,   _I, _H,           \
           _W, _G, _H, _P, _HD_SLSH,  _HD_MINS, _U,      _O,   _Y, _B)

#endif

#ifdef HD_GOLD_LAYER_ENABLE

LAYER_NAME(HD_GOLD, "HD Gold", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "T on left thumb, space on right, QZ on combos.")

carte_de_MAP("  jgmpv  ;./\"' ",                              \
             "  rsndb  ,aeih ",                               \
             "  xflcw  -uoyk  t")
/* t, ␣ */

LAYER_MAP(
  LANG_MAP(_J, _G, _M, _P, _V,  _HD_SCLN, _HD_DOT, _HD_SLSH, _HD_DQUO, _HD_QUOT, \
           _R, _S, _N, _D, _B , _HD_COMM, _A,      _E,       _I,       _H, \
           _X, _F, _L, _C, _W , _HD_MINS, _U,      _O,       _Y,       _K))

#endif

#ifdef HD_PLATINUM_LAYER_ENABLE


LAYER_NAME(HD_PLATINUM, "HD Platinum", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "L on left thumb, space on right")

/* jz pq alt shifts   ;: .& /\* '? "! ,| -+ */

carte_de_MAP( "jghpv   ;./'\"",               \
              "rsntb   ,aeic",                \
              "xfmdk   -uowy  l")
/* l   ␣   */

LAYER_MAP(
  LANG_MAP(_J, _G, _H, _P, _V,  _HD_SCLN, _HD_DOT, _HD_SLSH, _HD_QUOT, _HD_DQUO, \
           _R, _S, _N, _T, _B,  _HD_COMM, _A, _E, _I, _C,                \
           _X, _F, _M, _D, _K,  _HD_MINS, _U, _O, _W, _Y))

#endif

#ifdef HD_SILVER_LAYER_ENABLE

LAYER_NAME(HD_SILVER, "HD Silver", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "N on left thumb, space on right")

carte_de_MAP("jgmpv   ;./'\"",                \
             "rshtb   ,aeic",                 \
             "xfldk   -uowy  n")
/* n   ␣   */

LAYER_MAP(
  LANG_MAP(_J, _G, _M, _P, _V,  _HD_SCLN, _HD_DOT, _HD_SLSH, _HD_QUOT, _HD_DQUO, \
           _R, _S, _H, _T, _B,  _HD_COMM, _A,      _E,       _I,       _C, \
           _X, _F, _L, _D, _K,  _HD_MINS, _U,      _O,       _W,       _Y))

#endif

#ifdef HD_BRONZE_LAYER_ENABLE


LAYER_NAME(HD_BRONZE, "HD Bronze", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "H on left thumb, space on right")

carte_de_MAP("jgmpv   ;./'\"",                \
             "rsntb   ,aeic",                 \
             "xfldk   -uowy  h")
/* h   ␣   */

LAYER_MAP(
  LANG_MAP(_J, _G, _M, _P, _V, _HD_SCLN, _HD_DOT, _HD_SLSH, _HD_QUOT, _HD_DQUO, \
           _R, _S, _N, _T, _B , _HD_COMM, _A,     _E,       _I,       _C, \
           _X, _F, _L, _D, _K , _HD_MINS, _U,     _O,       _W,       _Y))

#endif

#ifdef HD_ELAN_LAYER_ENABLE

/* ,; .:  ␣  ⏎ */
/* vz g  h  p  kq  /\* (< {[ '! "? */

LAYER_NAME(HD_ELAN, "HD Elan", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "")

carte_de_MAP("vghpk   /({'\"",               \
             "rsntf   jaeci",                \
             "xmldb   -uowy")

LAYER_MAP(
  LANG_MAP(_V, _G, _H, _P, _K,   _HD_ELAN_SLSH, _HD_ELAN_LPRN, _HD_ELAN_LCBR, _HD_ELAN_QUOT, _HD_ELAN_DQUO, \
           _R, _S, _N, _T, _F,   _J,            _A, _E, _C, _I, \
           _X, _M, _L, _D, _B,   _HD_ELAN_MINS, _U, _O, _W, _Y))

#endif

#ifdef HD_DASH_LAYER_ENABLE


LAYER_NAME(HD_DASH, "HD Dash", \
                   "https://sites.google.com/alanreiser.com/handsdown/home", \
                   "E on left thumb")

  carte_de_MAP("jgmpv   ;.'\"/",             \
               "rsntb   ,haoi",              \
               "xcldw   -fuky  e")
    /*   e   ␣   */

LAYER_MAP(
  LANG_MAP(_J, _G, _M, _P, _V , _HD_DASH_SCLN, _HD_DASH_DOT, _HD_DASH_QUOT, _HD_DASH_DQUO, _HD_DASH_SLSH, \
           _R, _S, _N, _T, _B , _HD_DASH_COMM, _H, _A, _O, _I,                \
           _X, _C, _L, _D, _W , _HD_DASH_MINS, _F, _U, _K, _Y))

#endif
