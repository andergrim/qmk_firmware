#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        // Colemak DH
        KC_TAB,         KC_Q, KC_W, KC_F, KC_P, KC_B,     KC_J, KC_L,    KC_U,   KC_Y, KC_MINS,        KC_BSPC,
        LCTL_T(KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_G,     KC_M, KC_N,    KC_E,   KC_I,    KC_O, LCTL_T(KC_SCLN),
        KC_LSFT,        KC_Z, KC_X, KC_C, KC_D, KC_V,     KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH,        KC_RSFT,
            KC_LGUI, MO(1), KC_SPC,                                 KC_ENT, MO(2), KC_LALT
    ),
	[1] = LAYOUT_split_3x6_3(
        // Numerics and navigation
        KC_TAB,        KC_1,  KC_2,  KC_3,  KC_4,  KC_5,     KC_6,    KC_7,  KC_8,    KC_9,    KC_0,  KC_DEL,
        LCTL(KC_ESC), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_HOME, KC_PGUP,
        KC_LSFT,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO, KC_RBRC, KC_NO,   KC_NO,  KC_END, KC_PGDN,
            KC_LGUI, KC_TRNS, KC_SPC,                               KC_ENT, MO(3), KC_LGUI
    ),
	[2] = LAYOUT_split_3x6_3(
        // Shifted chars
        KC_TAB, KC_EXLM, KC_AT, KC_HASH, RALT(KC_4), KC_PERC,   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        LCTL(KC_ESC), RALT(KC_2), KC_NO, KC_NO, KC_NO, KC_NO,        KC_GRV, KC_EQL, KC_NO, KC_RBRC, KC_BSLS, KC_MINS,
        KC_LSFT, KC_NUBS, KC_NO, KC_NO, KC_NO, KC_NO,           KC_UNDS, KC_PLUS, KC_NO, RALT(KC_NUBS), RALT(KC_MINS), KC_RSFT,
            KC_LALT, MO(3), KC_SPC,                                 KC_ENT, KC_TRNS, KC_LALT
    ),
	[3] = LAYOUT_split_3x6_3(
        // F-keys
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,               KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        LCTL(KC_ESC), KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT,
            KC_LGUI, KC_TRNS, KC_SPC,                               KC_ENT, KC_TRNS, KC_LALT
    )
};


const uint16_t PROGMEM aring_combo[] =   { KC_A, KC_O, COMBO_END };
const uint16_t PROGMEM aumlaut_combo[] = { KC_A, KC_E, COMBO_END };
const uint16_t PROGMEM oumlaut_combo[] = { KC_O, KC_E, COMBO_END };

const uint16_t PROGMEM lpar_combo[] = { KC_P, KC_B, COMBO_END };
const uint16_t PROGMEM rpar_combo[] = { KC_J, KC_L, COMBO_END };

const uint16_t PROGMEM lbrk_combo[] = { KC_T, KC_G, COMBO_END };
const uint16_t PROGMEM rbrk_combo[] = { KC_M, KC_N, COMBO_END };

const uint16_t PROGMEM lbrc_combo[] = { KC_D, KC_V, COMBO_END };
const uint16_t PROGMEM rbrc_combo[] = { KC_K, KC_H, COMBO_END };

combo_t key_combos[COMBO_COUNT] = {
    COMBO(aring_combo, KC_LBRC),
    COMBO(aumlaut_combo, KC_QUOT),
    COMBO(oumlaut_combo, KC_SCLN),
    COMBO(lpar_combo, LSFT(KC_8)),
    COMBO(rpar_combo, LSFT(KC_9)),
    COMBO(lbrk_combo, RALT(KC_8)),
    COMBO(rbrk_combo, RALT(KC_9)),
    COMBO(lbrc_combo, RALT(KC_7)),
    COMBO(rbrc_combo, RALT(KC_0))
    /* COMBO(at_combo, RALT(KC_AT)), */
};
