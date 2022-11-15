#include QMK_KEYBOARD_H
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(
        // Qwerty
        KC_TAB,         KC_Q, KC_W, KC_E, KC_R, KC_T,     KC_Y, KC_U, KC_I, KC_O, KC_P,           KC_BSPC,
        LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G,     KC_H, KC_J, KC_K, KC_L, KC_GT,   LCTL_T(KC_ESC),
        KC_LSFT,        KC_Z, KC_X, KC_C, KC_V, KC_B,     KC_N, KC_M, KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT,
            KC_LGUI, MO(2), KC_SPC,                                 KC_ENT, MO(3), KC_LALT
    ),
	[1] = LAYOUT_split_3x6_3(
        // Colemak-DH
        KC_TAB,         KC_Q, KC_W, KC_F, KC_P, KC_B,     KC_J, KC_L,    KC_U,   KC_Y, KC_MINS,        KC_BSPC,
        LCTL_T(KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_G,     KC_M, KC_N,    KC_E,   KC_I,    KC_O, LCTL_T(KC_SCLN),
        KC_LSFT,        KC_Z, KC_X, KC_C, KC_D, KC_V,     KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH,        KC_RSFT,
            KC_LGUI, MO(2), KC_SPC,                                 KC_ENT, MO(3), KC_LALT
    ),
	[2] = LAYOUT_split_3x6_3(
        // Numerics and navigation
        KC_TAB,        KC_1,  KC_2,  KC_3,  KC_4,  KC_5,     KC_6,    KC_7,  KC_8,    KC_9,    KC_0,  KC_DEL,
        LCTL(KC_ESC), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_HOME, KC_PGUP,
        KC_LSFT,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO, KC_RBRC, KC_NO,   KC_NO,  KC_END, KC_PGDN,
            KC_LGUI, KC_TRNS, KC_SPC,                               KC_ENT, MO(4), KC_LGUI
    ),
	[3] = LAYOUT_split_3x6_3(
        // Shifted chars
        KC_TAB, KC_EXLM, KC_AT, KC_HASH, RALT(KC_4), KC_PERC,   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        LCTL(KC_ESC), RALT(KC_2), KC_NO, KC_NO, KC_NO, KC_NO,        KC_GRV, KC_EQL, KC_NO, KC_RBRC, KC_BSLS, KC_MINS,
        KC_LSFT, KC_NUBS, KC_NO, KC_NO, KC_NO, KC_NO,           KC_UNDS, KC_PLUS, KC_NO, RALT(KC_NUBS), RALT(KC_MINS), KC_RSFT,
            KC_LALT, MO(4), KC_SPC,                                 KC_ENT, KC_TRNS, KC_LALT
    ),
	[4] = LAYOUT_split_3x6_3(
        // Adjustments and media keys
        QK_BOOT, DF(0), DF(1), KC_NO, KC_NO, KC_NO,             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO,       KC_MUTE, KC_VOLD, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT,
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_LGUI, KC_TRNS, KC_SPC,                               KC_ENT, KC_TRNS, KC_LALT
    ),
	[5] = LAYOUT_split_3x6_3(
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

const uint16_t PROGMEM fkeys_combo[] = { KC_F, KC_J, COMBO_END };
const uint16_t PROGMEM fkeys_combo_c[] = { KC_T, KC_N, COMBO_END };

combo_t key_combos[COMBO_COUNT] = {
    COMBO(aring_combo, KC_LBRC),
    COMBO(aumlaut_combo, KC_QUOT),
    COMBO(oumlaut_combo, KC_SCLN),
    COMBO(lpar_combo, LSFT(KC_8)),
    COMBO(rpar_combo, LSFT(KC_9)),
    COMBO(lbrk_combo, RALT(KC_8)),
    COMBO(rbrk_combo, RALT(KC_9)),
    COMBO(lbrc_combo, RALT(KC_7)),
    COMBO(rbrc_combo, RALT(KC_0)),
    COMBO(fkeys_combo, MO(5)),
    COMBO(fkeys_combo_c, MO(5)),
    /* COMBO(at_combo, RALT(KC_AT)), */
};

enum layers {
  _DEFAULT,
  _COLEMAK,
  _RAISE,
  _LOWER,
  _ADJUST,
  _FKEYS
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _COLEMAK:
            rgblight_sethsv(HSV_CHARTREUSE);
            break;
        case _RAISE:
            rgblight_sethsv(HSV_PURPLE);
            break;
        case _LOWER:
            rgblight_sethsv(HSV_CYAN);
            break;
        case _ADJUST:
            rgblight_sethsv(HSV_PINK);
            break;
        case _FKEYS:
            rgblight_sethsv(HSV_GOLD);
            break;
        default: // for any other layers, or the default layer
            rgblight_sethsv(HSV_BLACK);
            break;
    }
  return state;
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_COLEMAK 2
#define L_LOWER 4
#define L_RAISE 8
#define L_ADJUST 16
#define L_FKEYS 32

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_COLEMAK:
            oled_write_ln_P(PSTR("Colemak"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_FKEYS:
            oled_write_ln_P(PSTR("F-keys"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE
