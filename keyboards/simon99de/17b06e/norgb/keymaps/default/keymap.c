// Copyright 2025 FabiClawZ
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(KC_1, KC_2), ENCODER_CCW_CW(KC_1, KC_2), ENCODER_CCW_CW(KC_1, KC_2)}
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_6x4(
        KC_A,                              KC_T,    KC_D,
                KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_B,   KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_E,
                KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
        KC_C,   KC_P0,   KC_PDOT, KC_PENT, KC_PPLS, KC_F
    )
};
