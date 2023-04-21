// Copyright  %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later
//
#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _FN,
    _WORK,
    _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MINS, KC_DOT, KC_PAUS, KC_SCRL, KC_PSCR, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_1,    KC_2,    KC_PGUP, KC_HOME, KC_INS,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_3,    KC_4,    KC_PGDN, KC_END,  KC_DEL,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,
        KC_5,    KC_6,    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NONUS_HASH,
        KC_7,    KC_8,    KC_UP,   KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
        KC_9,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_LGUI, MO(1), KC_LCTL
    ),
    //FN layer
    [1] = LAYOUT(
        RGB_TOG, RGB_M_P , KC_PAUS, KC_SCRL, KC_PSCR, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  QK_BOOT,
        RGB_MODE_REVERSE,    RGB_MODE_FORWARD,    KC_PGUP, KC_HOME, KC_INS,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        RGB_HUI,    RGB_SAI,    KC_PGDN, KC_END,  KC_DEL,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,
        RGB_VAI,    KC_6,    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NONUS_HASH,
        KC_7,    KC_8,    TG(2),   KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
        KC_9,    KC_0,    KC_LEFT, TG(0), KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_LGUI, KC_TRNS, KC_LCTL
    ),
    [2] = LAYOUT(
        DF(0), KC_PPLS, KC_PAUS, KC_SCRL, KC_PSCR, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_1,    KC_2,    KC_PGUP, KC_HOME, KC_INS,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_3,    KC_4,    KC_PGDN, KC_END,  KC_DEL,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,
        KC_5,    KC_6,    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NONUS_HASH,
        KC_7,    KC_8,    KC_UP,   KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
        KC_9,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_LGUI, MO(1), KC_LCTL
    ),
    [3] = LAYOUT(
        DF(0), KC_PPLS, KC_PAUS, KC_SCRL, KC_PSCR, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_1,    KC_2,    KC_PGUP, KC_HOME, KC_INS,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_3,    KC_4,    KC_PGDN, KC_END,  KC_DEL,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,
        KC_5,    KC_6,    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NONUS_HASH,
        KC_7,    KC_8,    KC_UP,   KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
        KC_9,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_LGUI, MO(1), KC_LCTL
    )
};

// Light LEDs 6 to 9 and 12 to 15 red when caps lock is active. Hard to ignore!
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {6, 4, HSV_RED},       // Light 4 LEDs, starting with LED 6
    {12, 4, HSV_RED}       // Light 4 LEDs, starting with LED 12
);
// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 2, HSV_CYAN}
);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {11, 2, HSV_PURPLE}
);
// Light LEDs 13 & 14 in green when keyboard layer 3 is active
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {13, 2, HSV_GREEN}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,
    my_layer1_layer,    // Overrides caps lock layer
    my_layer2_layer,    // Overrides other layers
    my_layer3_layer     // Overrides other layers
);
//get states 
bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _FN));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(2, layer_state_cmp(state, _WORK));
    rgblight_set_layer_state(3, layer_state_cmp(state, _ADJUST));
    return state;
}
void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

//void housekeeping_task_user(void) {
//    led_t led_state = host_keyboard_led_state();
//    uint8_t red = led_state.caps_lock ? 150 : 0;
//    uint8_t green = led_state.num_lock ? 0 : 0;
//    uint8_t blue = led_state.scroll_lock ? 0 : 0;
//    rgblight_setrgb_at(red, green, blue, 1,2);
//}