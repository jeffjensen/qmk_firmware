#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _FN     1
#define _NUMPAD 2

// Some basic macros
#define TASK    LCTL(LSFT(KC_ESC))
#define TAB_R   LCTL(KC_TAB)
#define TAB_L   LCTL(LSFT(KC_TAB))
#define TAB_RO  LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_5x7(
  // left hand
    KC_EQL,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_ESC,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           _______,
    KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           TT(_FN),
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,
    _______,        KC_GRV,         KC_LEFT,        KC_RGHT,
                                                                KC_BSPC,        KC_DEL,
                                                                KC_LCTL,        KC_HOME,
                                                                KC_LALT,        KC_END,
  // right hand
    TG(_NUMPAD),    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,
    _______,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    TT(_FN),        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,
                    KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        OSM(MOD_RSFT),
                                                    KC_UP,          KC_DOWN,        KC_LBRC,        KC_RBRC,
            KC_ENT,         KC_SPC,
            KC_PGUP,        KC_RCTL,
            KC_PGDN,        KC_RWIN
),

[_FN] = LAYOUT_5x7(
  // left hand
    _______,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          _______,
    _______,        _______,        _______,        KC_UP,          _______,        _______,        _______,
    _______,        _______,        KC_LEFT,        KC_DOWN,        KC_RGHT,        _______,        RESET,
    _______,        _______,        _______,        _______,        _______,        _______,
    KC_MSTP,        KC_MPLY,        KC_MPRV,        KC_MNXT,
                                                                _______,        _______,
                                                                _______,        _______,
                                                                _______,        _______,
  // right hand
    _______,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    _______,        _______,        _______,        _______,        _______,        _______,        KC_F12,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,
                    _______,        _______,        _______,        _______,        _______,        _______,
                                                    _______,        _______,        _______,        _______,
            KC_DEL,         _______,
            _______,        _______,
            _______,        _______
),

[_NUMPAD] = LAYOUT_5x7(
  // left hand
    _______,        _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,
    RGB_TOG,        RGB_HUI,        RGB_SAI,        RGB_VAI,        _______,        _______,        _______,
    RGB_MOD,        RGB_HUD,        RGB_SAD,        RGB_VAD,        _______,        _______,
    RGB_M_P,        RGB_M_B,        RGB_M_R,        _______,
                                                                _______,        _______,
                                                                _______,        _______,
                                                                _______,        _______,
  // right hand
    _______,        _______,        KC_NLCK,        _______,        KC_PMNS,        KC_PPLS,        _______,
    _______,        _______,        KC_P7,          KC_P8,          KC_P9,          _______,        _______,
    _______,        _______,        KC_P4,          KC_P5,          KC_P6,          KC_PAST,        _______,
                    _______,        KC_P1,          KC_P2,          KC_P3,          KC_PSLS,        _______,
                                                    KC_P0,          KC_PDOT,        _______,        _______,
            _______,        KC_PENT,
            _______,        _______,
            _______,        _______
),

};
