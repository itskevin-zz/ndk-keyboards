// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐     
     * │ e │NUM│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │   │ 7 │ 8 │ 9 │   │
     * │   ├───┼───┼───┤ + │
     * │   │ 4 │ 5 │ 6 │   │
     * │   ├───┼───┼───┼───┤
     * │   │ 1 │ 2 │ 3 │   │
     * ├───┼───┴───┼───┤ ← │
     * │ D │   0   │ . │   │
     * └───┴───────┴───┴───┘
     */
    [0] = LAYOUT_numpad_5x5(
        KC_MUTE, KC_COMM, KC_PSLS, KC_PAST,  KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,
        KC_P1,   KC_P2,   KC_P3, 
        KC_CALC, KC_P0,   KC_PDOT,  KC_PENT
    ),
    [1] = LAYOUT_numpad_5x5(
        _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,
        _______,   _______,   _______, 
        _______,   _______,   _______,   _______
    ),
    [2] = LAYOUT_numpad_5x5(
        _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,
        _______,   _______,   _______, 
        _______,   _______,   _______,   _______
    ),
    [3] = LAYOUT_numpad_5x5(
        _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
        _______,   _______,   _______,
        _______,   _______,   _______, 
        _______,   _______,   _______,   _______
    ) 
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = { ENCODER_CCW_CW(_______, _______) },
    [2] = { ENCODER_CCW_CW(_______, _______) },
    [3] = { ENCODER_CCW_CW(_______, _______) },
};
#endif