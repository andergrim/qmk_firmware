#include QMK_KEYBOARD_H
#include <stdio.h>

// Left-hand home row mods
#define GUI__A LGUI_T(KC_A)
#define ALT__R LALT_T(KC_R)
#define SFT__S LSFT_T(KC_S)
#define CTL__T LCTL_T(KC_T)

// Right-hand home row mods
#define CTL__N LCTL_T(KC_N)
#define SFT__E RSFT_T(KC_E)
#define ALT__I LALT_T(KC_I)
#define GUI__O RGUI_T(KC_O)

#define LCTL_ESC LCTL_T(KC_ESC)

#define CK_PIPE RALT(KC_NUBS)
#define CK_BSLS RALT(KC_MINS)
#define CK_ASTR LSFT(KC_BSLS)
#define CK_GRTT LSFT(KC_NUBS)
#define CK_AT   RALT(KC_2)
#define CK_DLR  RALT(KC_4)

enum custom_keycodes {
    CK_TLDE = SAFE_RANGE,
    CK_BKTK,
    MK_PAR,
    MK_BRK,
    MK_BRC,
    MK_QUOT,
    MK_SQUOT,
    MK_VIM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    // LCTL(KC_ESC), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL_T(KC_SCLN),
    //      KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT,
    //                        KC_LGUI, KC_TRNS, KC_SPC,     KC_ENT, KC_TRNS, KC_LALT

    // Colemak DH
    [0] = LAYOUT_split_3x6_3(
                KC_TAB,   KC_Q,   KC_W,   KC_F,   KC_P, KC_B,     KC_J, KC_L,   KC_U,    KC_Y,   KC_MINS, KC_BSPC,
              LCTL_ESC, GUI__A, ALT__R, SFT__S, CTL__T, KC_G,     KC_M, CTL__N, SFT__E,  ALT__I, GUI__O,  MK_VIM,
               KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_D, KC_V,     KC_K, KC_H,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                                        TT(4), MO(1), KC_SPC,     KC_ENT, MO(2), KC_LALT
    ),

    // Numerics and navigation
	[1] = LAYOUT_split_3x6_3(
              KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,  KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC,
            LCTL_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_SCLN, KC_QUOT,
             KC_LSFT,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,     KC_PGUP, KC_PGDN, KC_HOME, KC_END,  KC_INS,  KC_DEL,
                                         TT(4), KC_TRNS, KC_SPC,     KC_ENT, MO(3), KC_LALT
    ),

    // Shifted chars
	[2] = LAYOUT_split_3x6_3(
              KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  CK_DLR, KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
            LCTL_ESC,   CK_AT, KC_TRNS, KC_TRNS, KC_TRNS,   KC_NO,     CK_TLDE, KC_AMPR, CK_ASTR, KC_BSLS, CK_BKTK, KC_UNDS,
             KC_LSFT, KC_NUBS, CK_GRTT,   KC_NO,   KC_NO,   KC_NO,     KC_GRV,  KC_EQL,  KC_RBRC, CK_PIPE, CK_BSLS, KC_RSFT,
                                             TT(4), MO(3), KC_SPC,     KC_ENT, KC_TRNS, KC_LALT
    ),

    // F- and media keys
	[3] = LAYOUT_split_3x6_3(
               KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,     KC_F7,   KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
            LCTL_ESC,  GUI__A,  ALT__R,  SFT__S,  CTL__T, KC_VOLU,     KC_BRIU, CTL__N, SFT__E, ALT__I, GUI__O, KC_PSCR,
             KC_LSFT, KC_MPRV, KC_MNXT, KC_MPLY, KC_MUTE, KC_VOLD,     KC_BRID, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_RSFT,
                                           TT(4), KC_TRNS, KC_SPC,     KC_ENT, KC_TRNS, KC_LALT
    ),

    // Numpad
	[4] = LAYOUT_split_3x6_3(
              KC_TAB,  KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_NO,     KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_BSPC,
            LCTL_ESC, GUI__A, ALT__R, SFT__S, CTL__T, KC_NO,     KC_PAST, KC_P4, KC_P5, KC_P6, KC_PPLS, LCTL_T(KC_NUM),
             KC_LSFT,  KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_NO,     KC_P0,   KC_P1, KC_P2, KC_P3, KC_PDOT, KC_RSFT,
                                       TT(4), MO(1), KC_SPC,     MO(2), KC_TRNS, KC_LALT
    )
};


const uint16_t PROGMEM aring_combo[] =   { GUI__A, GUI__O, COMBO_END };
const uint16_t PROGMEM aumlaut_combo[] = { GUI__A, SFT__E, COMBO_END };
const uint16_t PROGMEM oumlaut_combo[] = { GUI__O, SFT__E, COMBO_END };

const uint16_t PROGMEM lpar_combo[] = { KC_P, KC_B, COMBO_END };
const uint16_t PROGMEM rpar_combo[] = { KC_J, KC_L, COMBO_END };

const uint16_t PROGMEM lbrk_combo[] = { CTL__T, KC_G, COMBO_END };
const uint16_t PROGMEM rbrk_combo[] = { KC_M, CTL__N, COMBO_END };

const uint16_t PROGMEM lbrc_combo[] = { KC_D, KC_V, COMBO_END };
const uint16_t PROGMEM rbrc_combo[] = { KC_K, KC_H, COMBO_END };

const uint16_t PROGMEM mk_par_combo[] = { KC_B, KC_J, COMBO_END };
const uint16_t PROGMEM mk_brk_combo[] = { KC_G, KC_M, COMBO_END };
const uint16_t PROGMEM mk_brc_combo[] = { KC_V, KC_K, COMBO_END };
const uint16_t PROGMEM mk_quot_combo[] = { KC_AT, KC_HASH, COMBO_END };
const uint16_t PROGMEM mk_squot_combo[] = { CK_ASTR, KC_BSLS, COMBO_END };



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
    COMBO(mk_par_combo, MK_PAR),
    COMBO(mk_brk_combo, MK_BRK),
    COMBO(mk_brc_combo, MK_BRC),
    COMBO(mk_quot_combo, MK_QUOT),
    COMBO(mk_squot_combo, MK_SQUOT)
};


enum layers {
  _COLEMAK,
  _RAISE,
  _LOWER,
  _MEDIA,
  _NUMPAD
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _MEDIA:
            rgblight_sethsv(HSV_CHARTREUSE);
            break;
        case _RAISE:
            rgblight_sethsv(HSV_PURPLE);
            break;
        case _LOWER:
            rgblight_sethsv(HSV_CYAN);
            break;
        case _NUMPAD:
            rgblight_sethsv(HSV_GOLD);
            break;
        default: // for any other layers, or the default layer
            rgblight_sethsv(HSV_BLACK);
            break;
    }
  return state;
}


// Handle Caps Word, continuation and stop chars
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;
        case KC_SLSH:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

// Handle custom keys
#ifndef OLED_ENABLE
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case CK_TLDE:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_RBRC) SS_TAP(X_RBRC)));
            }
            return false;

        case CK_BKTK:
            if (record->event.pressed) {
                SEND_STRING(SS_RSFT(SS_TAP(X_EQL) SS_TAP(X_EQL)));
            }
            return false;

        case MK_PAR:
            if (record->event.pressed) {
                SEND_STRING(SS_RSFT(SS_TAP(X_8) SS_TAP(X_9)) SS_TAP(X_LEFT));
            }
            return false;

        case MK_BRK:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_8) SS_TAP(X_9)) SS_TAP(X_LEFT));
            }
            return false;

        case MK_BRC:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_7) SS_TAP(X_0)) SS_TAP(X_LEFT));
            }
            return false;

        case MK_QUOT:
            if (record->event.pressed) {
                SEND_STRING(SS_RSFT(SS_TAP(X_2) SS_TAP(X_2)) SS_TAP(X_LEFT));
            }
            return false;

        case MK_SQUOT:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_BSLS) SS_TAP(X_BSLS) SS_TAP(X_LEFT));
            }
            return false;

        case MK_VIM:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_ESC) SS_LSFT(SS_TAP(X_DOT)));
            }
            return false;

    }

    return true;
};
#endif // OLED_ENABLE


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

    switch (keycode) {
        case CK_TLDE:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_RBRC) SS_TAP(X_RBRC)));
            }
            return false;

        case CK_BKTK:
            if (record->event.pressed) {
                SEND_STRING(SS_RSFT(SS_TAP(X_EQL) SS_TAP(X_EQL)));
            }
            return false;

        case MK_PAR:
            if (record->event.pressed) {
                SEND_STRING(SS_RSFT(SS_TAP(X_8) SS_TAP(X_9)) SS_TAP(X_LEFT));
            }
            return false;

        case MK_BRK:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_8) SS_TAP(X_9)) SS_TAP(X_LEFT));
            }
            return false;

        case MK_BRC:
            if (record->event.pressed) {
                SEND_STRING(SS_RALT(SS_TAP(X_7) SS_TAP(X_0)) SS_TAP(X_LEFT));
            }
            return false;

        case MK_QUOT:
            if (record->event.pressed) {
                SEND_STRING(SS_RSFT(SS_TAP(X_2) SS_TAP(X_2)) SS_TAP(X_LEFT));
            }
            return false;

        case MK_SQUOT:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_BSLS) SS_TAP(X_BSLS) SS_TAP(X_LEFT));
            }
            return false;

        case MK_VIM:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_ESC) SS_LSFT(SS_TAP(X_DOT)));
            }
            return false;

    }

    return true;
}
#endif // OLED_ENABLE
