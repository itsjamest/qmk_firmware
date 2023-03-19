// Copyright 2023 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later
//
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        RGB_MODE_FORWARD, RGB_TOG, KC_CAPS, KC_SLCT, KC_PSCR,
        KC_1,    KC_2,    KC_PGUP, KC_HOME, KC_INS,
        KC_3,    KC_4,    KC_PGDN, KC_END,  KC_DEL,
        KC_5,    KC_6,
        KC_7,    KC_8,    XXXXXXX,
        KC_9,    KC_0,    XXXXXXX, XXXXXXX, XXXXXXX
    )
};
void housekeeping_task_user(void) {
    led_t led_state = host_keyboard_led_state();
    uint8_t red = led_state.caps_lock ? 150 : 0;
    uint8_t green = led_state.num_lock ? 0 : 0;
    uint8_t blue = led_state.scroll_lock ? 0 : 0;
    rgblight_setrgb_range(red, green, blue, 0,29);
}
//void housekeeping_task_user(void) {
//    led_t led_state = host_keyboard_led_state();
//    uint8_t red = led_state.caps_lock ? 150 : 0;
//    uint8_t green = led_state.num_lock ? 0 : 0;
//    uint8_t blue = led_state.scroll_lock ? 0 : 0;
//    rgblight_setrgb_at(red, green, blue, 1,2);
//}