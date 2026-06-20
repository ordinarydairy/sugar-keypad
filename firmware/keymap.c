#include QMK_KEYBOARD_H

enum encoder_names {
  _KNOB,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MPRV, KC_MNXT, KC_MPLY,
        KC_MCTL, KC_LPAD, KC_MUTE
    ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == _KNOB) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}