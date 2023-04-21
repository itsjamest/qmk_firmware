// Copyright  %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later
//
#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _FN,
    _NUMPAD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MINS, KC_PPLS, KC_PAUS, KC_SCRL, KC_PSCR, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_1,    KC_2,    KC_PGUP, KC_HOME, KC_INS,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_3,    KC_4,    KC_PGDN, KC_END,  KC_DEL,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,
        KC_5,    KC_6,    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NONUS_HASH,
        KC_7,    KC_8,    KC_UP,   KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
        KC_9,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_LGUI, MO(1), KC_LCTL
    ),
    
    [1] = LAYOUT(
        RGB_TOG, RGB_M_P , KC_PAUS, KC_SCRL, KC_PSCR, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  QK_BOOT,
        RGB_MODE_REVERSE,    RGB_MODE_FORWARD,    KC_PGUP, KC_HOME, KC_INS,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        RGB_HUI,    RGB_SAI,    KC_PGDN, KC_END,  KC_DEL,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,
        RGB_VAI,    KC_6,    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NONUS_HASH,
        KC_7,    KC_8,    KC_UP,   KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
        KC_9,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_LGUI, KC_TRNS, KC_LCTL
    ),
    [2] = LAYOUT(
        DF(0), KC_PPLS, KC_PAUS, KC_SCRL, KC_PSCR, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_1,    KC_2,    KC_PGUP, KC_HOME, KC_INS,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_3,    KC_4,    KC_PGDN, KC_END,  KC_DEL,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,
        KC_5,    KC_6,    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NONUS_HASH,
        KC_7,    KC_8,    KC_UP,   KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
        KC_9,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_LGUI, MO(2), KC_LCTL
    )
};

void housekeeping_task_user(void) {
    led_t led_state = host_keyboard_led_state();
    uint8_t red = led_state.caps_lock ? 50 : 0;
    uint8_t green = layer_state_is(0) ? 50 : 0;
    uint8_t blue = layer_state_is(1) ? 50 : 0;
    rgblight_setrgb_range(red, green, blue, 19,20);
}

//void housekeeping_task_user(void) {
//    led_t led_state = host_keyboard_led_state();
//    uint8_t red = led_state.caps_lock ? 150 : 0;
//    uint8_t green = led_state.num_lock ? 0 : 0;
//    uint8_t blue = led_state.scroll_lock ? 0 : 0;
//    rgblight_setrgb_at(red, green, blue, 1,2);
//}