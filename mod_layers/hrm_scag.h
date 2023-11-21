// LEFT.
#define ROW0L_5_hrm_scag(K01, K02, K03, K04, K05)       \
  K01, K02, K03, K04, K05

// Take and put an extra column in front.
// Mod K01 how you want it.
#define ROW0L_6_hrm_scag(K01, K02, K03, K04, K05, K06) \
  K01    \
  , ROW0L_5_hrm_scag(K02, K03, K04, K05, K06)

// 5 into 6, derivitive of the first two.
#define ROW0L_5_6_hrm_scag(K01, K02, K03, K04, K05) \
  ROW0L_6_hrm_scag(LEFT_0, K01, K02, K03, K04, K05)

// RIGHT.
#define ROW0R_5_hrm_scag(K01, K02, K03, K04, K05)       \
  K01, K02, K03, K04, K05

// Take and put an extra column in front.
// Mod K01 how you want it.
#define ROW0R_6_hrm_scag(K01, K02, K03, K04, K05, K06) \
  ROW0R_5_hrm_scag(K01, K02, K03, K04, K05),\
  K06

// 5 into 6, derivitive of the first two.
#define ROW0R_5_6_hrm_scag(K01, K02, K03, K04, K05) \
  ROW0R_6_hrm_scag(K01, K02, K03, K04, K05, RIGHT_0)

// ROW1
// LEFT.
#define ROW1L_5_hrm_scag(K01, K02, K03, K04, K05)       \
  K01, K02, K03, LT(_NAV, K04), K05

// Take and put an extra column in front.
// Mod K01 how you want it.
#define ROW1L_6_hrm_scag(K01, K02, K03, K04, K05, K06)  \
  K01    \
  , ROW1L_5_hrm_scag(K02, K03, K04, K05, K06)

// 5 into 6, derivitive of the first two.
#define ROW1L_5_6_hrm_scag(K01, K02, K03, K04, K05) \
  ROW1L_6_hrm_scag(LEFT_1, K01, K02, K03, K04, K05)

// RIGHT.
#define ROW1R_5_hrm_scag(K01, K02, K03, K04, K05)                       \
  K01, K02, K03, K04, LT(_LAYERS, K05)                                  \

// Take and put an extra column in front.
// Mod K06 how you want it.
#define ROW1R_6_hrm_scag(K01, K02, K03, K04, K05, K06) \
  ROW1R_5_hrm_scag(K01, K02, K03, K04, K05),\
  K06

// 5 into 6, derivitive of the first two.
#define ROW1R_5_6_hrm_scag(K01, K02, K03, K04, K05) \
  ROW1R_6_hrm_scag(K01, K02, K03, K04, K05, RIGHT_1)

// LEFT.
#define ROW2L_5_hrm_scag(K01, K02, K03, K04, K05)                       \
  MT(MOD_LSFT, K01), MT(MOD_LCTL, K02), MT(MOD_LALT, K03), MT(MOD_LGUI, K04), K05

// Take and put an extra column in front.
// Mod K01 how you want it.
#define ROW2L_6_hrm_sga(K01, K02, K03, K04, K05, K06)   \
   K01    \
   , ROW2L_5_hrm_scag(K02, K03, K04, K05, K06)

// 5 into 6, derivitive of the first two.
#define ROW2L_5_6_hrm_scag(K01, K02, K03, K04, K05) \
  ROW2L_6_hrm_scag(LEFT_2, K01, K02, K03, K04, K05)

// RIGHT.
#define ROW2R_5_hrm_scag(K01, K02, K03, K04, K05)                       \
  K01, MT(MOD_RGUI, K02),  MT(MOD_RALT, K03), MT(MOD_RCTL, K04), MT(MOD_RSFT, K05)

// Take and put an extra column in front.
// Mod K06 how you want it.
#define ROW2R_6_hrm_scag(K01, K02, K03, K04, K05, K06) \
  ROW2R_5_hrm_scag(K01, K02, K03, K04, K05),\
  K06

// 5 into 6, derivitive of the first two.
#define ROW2R_5_6_hrm_scag(K01, K02, K03, K04, K05) \
  ROW2R_6_hrm_scag(K01, K02, K03, K04, K05, RIGHT_2)

// ROW 3
// LEFT.
#define ROW3L_5_hrm_scag(K01, K02, K03, K04, K05)       \
  K01, K02, K03, K04, K05

// Take and put an extra column in front.
// Mod K01 how you want it.
#define ROW3L_6_hrm_scag(K01, K02, K03, K04, K05, K06)  \
  K01    \
  ,  ROW3L_5_hrm_scag(K02, K03, K04, K05, K06)

// 5 into 6, derivitive of the first two.
#define ROW3L_5_6_hrm_scag(K01, K02, K03, K04, K05) \
  ROW3L_6_hrm_scag(LEFT_3,  K01, K02, K03, K04, K05)

// RIGHT.
#define ROW3R_5_hrm_scag(K01, K02, K03, K04, K05)       \
  K01, LT(_NAV, K02), K03, LT(LANG_N(_SYMB), K04), K05

// Take and put an extra column in front.
#define ROW3R_6_hrm_scag(K01, K02, K03, K04, K05, K06) \
  ROW3R_5_hrm_scag(K01, K02, K03, K04, K05),\
  K06

// 5 into 6, derivitive of the first two.
#define ROW3R_5_6_hrm_scag(K01, K02, K03, K04, K05) \
  ROW3R_6_hrm_scag(K01, K02, K03, K04, K05, RIGHT_3)
