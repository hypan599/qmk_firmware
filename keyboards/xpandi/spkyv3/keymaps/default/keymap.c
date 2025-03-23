// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    ALPHA,
    NAV,
    MOUSE,
    NUM,
    FUNC,
};

enum custom_keycodes {
    SMTD_KEYCODES_BEGIN  = SAFE_RANGE,
    CKC_A, // reads as C(ustom) + KC_A, but you may give any name here
    CKC_R,
    CKC_S,
    CKC_T,
    CKC_N,
    CKC_E,
    CKC_I,
    CKC_O,
    SMTD_KEYCODES_END,
};

enum combos {
    LU_LPAR,
    UY_RPAR,
    NE_MINS,
    EI_EQAL,
    HCOMMA_LBRC,
    COMDOT_RBRC
};

const uint16_t PROGMEM lu_combo[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM uy_combo[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM ne_combo[] = {KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM ei_combo[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM hcomma_combo[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM comdot_combo[] = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[] = {
    [LU_LPAR] = COMBO(lu_combo, S(KC_9)),
    [UY_RPAR] = COMBO(uy_combo, S(KC_0)),
    [NE_MINS] = COMBO(ne_combo, KC_MINS),
    [EI_EQAL] = COMBO(ei_combo, KC_EQL),
    [HCOMMA_LBRC] = COMBO(hcomma_combo, KC_LBRC),
    [COMDOT_RBRC] = COMBO(comdot_combo, KC_RBRC),
};

// #define MY_COPY
// #define MY_PSTE

#define SPC_NAV LT(NAV, KC_SPC)
#define ENT_MSE LT(MOUSE, KC_ENT)
#define BSP_NUM LT(NUM, KC_BSPC)
#define ENT_FNS LT(FUNC, KC_ENT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [ALPHA] = LAYOUT_default(
        KC_TAB ,    KC_Q,       KC_W,       KC_F,       KC_P,          KC_B,                             KC_J,       KC_L,       KC_U,       KC_Y,   KC_SCLN,     XXXXXXX,
        KC_ESC ,    KC_A,       KC_R,       KC_S,       KC_T,          KC_G,                             KC_M,       KC_N,       KC_E,       KC_I,      KC_O,     KC_QUOT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_D,          KC_V,                             KC_K,       KC_H,    KC_COMM,     KC_DOT,   KC_SLSH,     KC_RSFT,
                    KC_LCTL,    KC_LCTL,    KC_LALT,    KC_LCMD,    SPC_NAV,    ENT_MSE,    ENT_FNS,  BSP_NUM,    KC_LEFT,    KC_DOWN,      KC_UP,   KC_RGHT
    ),
    [NAV] = LAYOUT_default(
        _______,    _______,    _______,    _______,    _______,    _______,                         _______,   _______,    _______,    _______,    _______,    _______,
        KC_BSPC,    KC_LCTL,    KC_LALT,    KC_LCMD,    KC_LSFT,    _______,                         KC_BSPC,   KC_LEFT,    KC_DOWN,      KC_UP,    KC_RGHT,    _______,
        _______,    _______,    _______,    G(KC_C),    _______,    G(KC_V),                         _______,   _______,    _______,    _______,    _______,    _______,
                    _______,    _______,    _______,    _______,    _______,    _______,    KC_ENT,  KC_BSPC,   _______,    _______,    _______,    _______
    ),
    [NUM] = LAYOUT_default(
        KC_GRV ,    KC_MINS,       KC_7,       KC_8,       KC_9,     KC_EQL,                         _______,   _______,    _______,    _______,    _______,    _______,
        _______,    KC_LBRC,       KC_4,       KC_5,       KC_6,    KC_RBRC,                         KC_BSPC,   KC_RSFT,    KC_RCMD,    KC_RALT,    KC_RCTL,    _______,
        _______,       KC_0,       KC_1,       KC_2,       KC_3,    KC_BSLS,                         _______,   _______,    _______,    _______,    _______,    _______,
                    _______,    _______,    _______,     KC_DOT,     KC_SPC,     KC_ENT,    _______, _______,   _______,    _______,    _______,    _______
    ),
    [MOUSE] = LAYOUT_default(
        _______,    _______,    _______,    _______,    _______,    _______,                         _______,   _______,    _______,    _______,    _______,    _______,
        KC_BSPC,    KC_LCTL,    KC_LALT,    KC_LCMD,    KC_LSFT,    _______,                         _______,   MS_LEFT,    MS_DOWN,      MS_UP,    MS_RGHT,    _______,
        _______,    _______,    _______,    G(KC_C),    _______,    G(KC_V),                         _______,   MS_WHLL,    MS_WHLD,    MS_WHLU,    MS_WHLR,    _______,
                    _______,    _______,    _______,    _______,    _______,    _______,    MS_BTN2, MS_BTN1,   MS_BTN3,    _______,    _______,    _______
    ),
    [FUNC] = LAYOUT_default(
        _______,     KC_F13,      KC_F7,      KC_F8,      KC_F9,     KC_F10,                         _______,   _______,    _______,    _______,    _______,    _______,
        _______,     KC_F14,      KC_F4,      KC_F5,      KC_F6,     KC_F11,                         KC_BSPC,   KC_RSFT,    KC_RCMD,    KC_RALT,    KC_RCTL,    _______,
        _______,     KC_F15,      KC_F1,      KC_F2,      KC_F3,     KC_F12,                         _______,   _______,    _______,    _______,    _______,    _______,
                    _______,    _______,    _______,    _______,     KC_SPC,     KC_ENT,    _______, _______,   _______,    _______,    _______,    _______
    ),
};

// #include "sm_td.h"

// void on_smtd_action(uint16_t keycode, smtd_action action, uint8_t tap_count) {
//     switch (keycode) {
//         SMTD_MT(CKC_A, KC_A, KC_LCTL)
//         SMTD_MT(CKC_R, KC_R, KC_LALT)
//         SMTD_MT(CKC_S, KC_S, KC_LCMD)
//         SMTD_MT(CKC_T, KC_T, KC_LSFT)

//         SMTD_MT(CKC_N, KC_N, KC_RSFT)
//         SMTD_MT(CKC_E, KC_E, KC_RCMD)
//         SMTD_MT(CKC_I, KC_I, KC_RALT)
//         SMTD_MT(CKC_O, KC_O, KC_RCTL)
//     }
// }

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     if (!process_smtd(keycode, record)) {
//         return false;
//     }
//     // your code here
//     return true;
// }
