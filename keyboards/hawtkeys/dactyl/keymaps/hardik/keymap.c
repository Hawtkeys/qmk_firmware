#include QMK_KEYBOARD_H

// Some basic macros
#define TASK   LCTL(LSFT(KC_ESC))
#define TAB_R  LCTL(KC_TAB)
#define TAB_L  LCTL(LSFT(KC_TAB))
#define TAB_RO LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Left hand (28 keys)
        /* Row 0 */ KC_0,  KC_1,    KC_2,    KC_3,
        /* Row 1 */ KC_4,    KC_5,    KC_6,    KC_7,  KC_8,
        /* Row 2 */ KC_W,    KC_E,    KC_R,    KC_T,    KC_M,
        /* Row 3 */ KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        /* Row 4 */ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        /* Row 5 */ KC_L, KC_N,
        /* Row 6 */ KC_W, KC_Y,

        // Right hand (28 keys) - unique keycodes
        /* Row 0 */ KC_F1,  KC_F2,   KC_F3,   KC_F4,
        /* Row 1 */ KC_F5,  KC_F6,   KC_F7,   KC_F8,  KC_F9,
        /* Row 2 */ KC_F10, KC_F11,  KC_F12,  KC_INS, KC_DEL,
        /* Row 3 */ KC_HOME,KC_END,  KC_PGUP, KC_PGDN,KC_UP,
        /* Row 4 */ KC_LEFT,KC_DOWN, KC_RIGHT,KC_MUTE,KC_VOLU,
        /* Row 5 */ KC_VOLD,KC_MPLY,
        /* Row 6 */ KC_MPRV,KC_MNXT
    ),

    // 3 all transparent layer both sides`
    [1] = LAYOUT(
        // Left hand (28 keys)
        /* Row 0 */ _______, _______, _______, _______,
        /* Row 1 */ _______, _______, _______, _______, _______,
        /* Row 2 */ _______, _______, _______, _______, _______,
        /* Row 3 */ _______, _______, _______, _______, _______,
        /* Row 4 */ _______, _______, _______, _______, _______,
        /* Row 5 */ _______, _______,
        /* Row 6 */ _______, _______,

        // Right hand (28 keys) - unique keycodes
        /* Row 0 */ _______, _______, _______, _______,
        /* Row 1 */ _______, _______, _______, _______, _______,
        /* Row 2 */ _______, _______, _______, _______, _______,
        /* Row 3 */ _______, _______, _______, _______, _______,
        /* Row 4 */ _______, _______, _______, _______, _______,
        /* Row 5 */ _______, _______,
        /* Row 6 */ _______, _______
    ),

    [2] = LAYOUT(
        // Left hand (28 keys)
        /* Row 0 */ _______, _______, _______, _______,
        /* Row 1 */ _______, _______, _______, _______, _______,
        /* Row 2 */ _______, _______, _______, _______, _______,
        /* Row 3 */ _______, _______, _______, _______, _______,
        /* Row 4 */ _______, _______, _______, _______, _______,
        /* Row 5 */ _______, _______,
        /* Row 6 */ _______, _______,

        // Right hand (28 keys) - unique keycodes
        /* Row 0 */ _______, _______, _______, _______,
        /* Row 1 */ _______, _______, _______, _______, _______,
        /* Row 2 */ _______, _______, _______, _______, _______,
        /* Row 3 */ _______, _______, _______, _______, _______,
        /* Row 4 */ _______, _______, _______, _______, _______,
        /* Row 5 */ _______, _______,
        /* Row 6 */ _______, _______
    ),

    [3] = LAYOUT(
        // Left hand (28 keys)
        /* Row 0 */ _______, _______, _______, _______,
        /* Row 1 */ _______, _______, _______, _______, _______,
        /* Row 2 */ _______, _______, _______, _______, _______,
        /* Row 3 */ _______, _______, _______, _______, _______,
        /* Row 4 */ _______, _______, _______, _______, _______,
        /* Row 5 */ _______, _______,
        /* Row 6 */ _______, _______,

        // Right hand (28 keys) - unique keycodes
        /* Row 0 */ _______, _______, _______, _______,
        /* Row 1 */ _______, _______, _______, _______, _______,
        /* Row 2 */ _______, _______, _______, _______, _______,
        /* Row 3 */ _______, _______, _______, _______, _______,
        /* Row 4 */ _______, _______, _______, _______, _______,
        /* Row 5 */ _______, _______,
        /* Row 6 */ _______, _______
    )

};



void keyboard_post_init_user(void) {
  // enable console/debug while debugging hardware
//   debug_enable = true;
//   debug_matrix = true;
}

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    
    // check if console is enabled
    return true; // skip processing if console is not enabled

    uint8_t row = record->event.key.row;
    uint8_t col = record->event.key.col;
    uint8_t layer = biton32(layer_state);

    if (record->event.pressed) {
        if (row == 0xFF || col == 0xFF) {
            uprintf("KEY DOWN: keycode=0x%04X (%u)  VIRTUAL/SYNTHESIZED  layer=%u\n", keycode, keycode, layer);
        } else {
            uprintf("KEY DOWN: keycode=0x%04X (%u)  row=%u  col=%u  layer=%u\n", keycode, keycode, row, col, layer);
        }
    } else {
        if (row == 0xFF || col == 0xFF) {
            uprintf("KEY UP:   keycode=0x%04X (%u)  VIRTUAL/SYNTHESIZED\n", keycode, keycode);
        } else {
            uprintf("KEY UP:   keycode=0x%04X (%u)  row=%u  col=%u\n", keycode, keycode, row, col);
        }
    }

    return true;
} */