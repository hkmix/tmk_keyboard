/*
 * HHKB Layout
 */
#include "keymap_common.h"

// Used for SHIFT_ESC
#define SHIFT_DOWN (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))

#define BL 0
#define MBL 1
#define TL 2
#define FL 3
#define VL 4

    /* Layer x: Template Layer
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
     */

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | \ | ` |
     * |-----------------------------------------------------------|
     * | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] | Bsp |
     * |-----------------------------------------------------------|
     * | Ctrl | A | S | D | F | G | H | J | K | L | ; | ' | Enter  |
     * |-----------------------------------------------------------|
     * | Shift  | Z | X | C | V | B | N | M | , | . | / |Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt| Gui |         Space         | Gui |Fn5|
     *       `-------------------------------------------'
     */
    KEYMAP(FN0, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN1,             \
                LALT,LGUI,          SPC,                RGUI,FN5),

    /* Layer 1: Standard MacBook ANSI Layer
     * ,-----------------------------------------------------------.
     * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |Bsp|Bsp|
     * |-----------------------------------------------------------|
     * | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |  \  |
     * |-----------------------------------------------------------|
     * | Ctrl | A | S | D | F | G | H | J | K | L | ; | ' | Enter  |
     * |-----------------------------------------------------------|
     * | Shift  | Z | X | C | V | B | N | M | , | . | / |Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Alt| Gui |         Space         | Gui |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSPC, BSPC, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSLS,       \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 2: Standard ANSI Layer
     * ,-----------------------------------------------------------.
     * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |Bsp|Bsp|
     * |-----------------------------------------------------------|
     * | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |  \  |
     * |-----------------------------------------------------------|
     * | Ctrl | A | S | D | F | G | H | J | K | L | ; | ' | Enter  |
     * |-----------------------------------------------------------|
     * | Shift  | Z | X | C | V | B | N | M | , | . | / |Shift |Fn1|
     * `-----------------------------------------------------------'
     *       |Gui| Alt |         Space         | Alt |Gui|
     *       `-------------------------------------------'
     */
    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSPC, BSPC, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSLS,       \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            \
                LGUI,LALT,          TRNS,               LALT,LGUI),

    /* Layer 3: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * | ` |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |Prv|Ply|Nxt|Stp|   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |V- |V+ |Vm |   |   | * | / |Hom|PgU|Lft|Rgt| Enter  |
     * |-----------------------------------------------------------|
     * |        |F14|F15|FN4|FN3|FN2| + | - |End|PgD|Dwn|      |xxx|
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,MPRV,MPLY,MNXT,MSTP,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  TRNS,BSPC,     \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,          \
           TRNS,F14, F15, FN4, FN3, FN2, PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,          \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 4: Vim and number pad Layer
     * ,-----------------------------------------------------------.
     * |VL |Nlk| / | * | - |   |   |   |   |   |   |   |   |   |Usr|
     * |-----------------------------------------------------------|
     * |NmLk | 7 | 8 | 9 | + |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |Enter | 4 | 5 | 6 | + |   |   |MB1|M^ |MB2|MW^|   |        |
     * |-----------------------------------------------------------|
     * |   =    | 1 | 2 | 3 |Ent|   |MB3|M< |Mv |M> |MWv|      |   |
     * `-----------------------------------------------------------'
     *       | . |  0  |                       |     |xxx|
     *       `-------------------------------------------'
     */
    KEYMAP(FN4, NLCK,PSLS,PAST,PMNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN6 , \
           NLCK,P7,  P8,  P9,  PPLS,TRNS,TRNS,WH_L,WH_R,TRNS,TRNS,TRNS,TRNS,TRNS,      \
           PENT,P4,  P5,  P6,  PPLS,TRNS,TRNS,BTN1,MS_U,BTN2,WH_U,TRNS,TRNS,           \
           PEQL,P1,  P2,  P3,  PENT,PMNS,BTN3,MS_L,MS_D,MS_R,WH_D,TRNS,TRNS,           \
                PDOT,P0,            TRNS,               TRNS,TRNS),
};

/*
 * Function IDs
 */
enum function_id {
    SHIFT_ESC,
    WHOAMI,
};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
    [0] = ACTION_MACRO(SHIFT_ESC),
    [1] = ACTION_LAYER_MOMENTARY(FL),
    [2] = ACTION_LAYER_TOGGLE(TL),
    [3] = ACTION_LAYER_TOGGLE(MBL),
    [4] = ACTION_LAYER_TOGGLE(VL),
    [5] = ACTION_LAYER_MOMENTARY(VL),
    [6] = ACTION_MACRO(WHOAMI),
};
#else
const action_t fn_actions[] PROGMEM = {
    [0] = ACTION_MACRO(SHIFT_ESC),
    [1] = ACTION_LAYER_MOMENTARY(FL),
    [2] = ACTION_LAYER_TOGGLE(TL),
    [3] = ACTION_LAYER_TOGGLE(MBL),
    [4] = ACTION_LAYER_TOGGLE(VL),
    [5] = ACTION_LAYER_MOMENTARY(VL),
    [6] = ACTION_MACRO(WHOAMI),
};
#endif

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  static uint8_t shift_down;
  switch (id) {
  case SHIFT_ESC:
    shift_down = get_mods() & SHIFT_DOWN;
    if (record->event.pressed) {
      if (shift_down) {
        return MACRO(T(GRV), END);
      } else {
        return MACRO(T(ESC), END);
      }
    }
    break;

  case WHOAMI:
    if (record->event.pressed) {
      return MACRO(
          D(LSFT), T(P), U(LSFT),
          T(R),
          T(O),
          T(P),
          T(E),
          T(R),
          T(T),
          T(Y),
          T(SPC),
          T(O),
          T(F),
          T(SPC),
          D(LSFT), T(J), U(LSFT),
          T(A),
          T(C),
          T(K),
          T(SPC),
          D(LSFT), T(Z), U(LSFT),
          T(H),
          T(O),
          T(U),
          T(SPC),
          D(LSFT), T(9),
          T(2), U(LSFT),
          T(H),
          T(K),
          T(M),
          T(I),
          T(X),
          D(LSFT), T(0), U(LSFT),
      );
    }
  }

  return MACRO(END);
}
