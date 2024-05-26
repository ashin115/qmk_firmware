/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, /*                                      */ KC_Y, KC_U, KC_I, KC_O, KC_P, KC_VOLU,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_BTN1, KC_A, KC_S, KC_D, KC_F, KC_G, /*                                      */ KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_MUTE, KC_Z, KC_X, KC_C, KC_V, KC_B, /*                                      */ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_VOLD,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        MO(2), OSM(MOD_LSFT), KC_ENT, /*                                               */ KC_SPC, MO(1), KC_BSPC
        //`--------------------------'  `--------------------------'

        ),

    [1] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, /*                         */ KC_CIRC, KC_AMPR, KC_ASTR, KC_EQL, KC_GRV, KC_BSLS,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, /*                                     */ KC_MINS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_PIPE,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0, /*                                     */ KC_UNDS, KC_LCBR, KC_RCBR, KC_PLUS, KC_TILD, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_TRNS, KC_TRNS, KC_TRNS, /*                                                 */ KC_TRNS, KC_TRNS, KC_TRNS
        //`--------------------------'  `--------------------------'
        ),

    [2] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, /*                                  */ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, TG(3),
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY, /*                         */ KC_BRIU, KC_BRID, KC_UP, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /*                         */ XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_TRNS, KC_TRNS, KC_TRNS, /*                                                    */ KC_TRNS, KC_TRNS, KC_TRNS
        //`--------------------------'  `--------------------------'
        ),

    [3] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_ESC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, /*                                      */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(3),
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_3, KC_G, KC_A, KC_S, KC_D, KC_F, /*                                         */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_4, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, /*                                      */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_1, KC_2, KC_SPC, /*                                                          */ KC_ENT, XXXXXXX, KC_RALT
        //`--------------------------'  `--------------------------'
        ),

    [4] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /*                         */ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, OSM(MOD_LSFT), OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LCTL), QK_REP, /*  */ XXXXXXX, XXXXXXX, KC_WH_D, XXXXXXX, XXXXXXX, KC_SLEP,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, XXXXXXX, /*                         */ XXXXXXX, XXXXXXX, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, /*                                                    */ XXXXXXX, XXXXXXX, XXXXXXX
        //`--------------------------'  `--------------------------'
        ),

};

enum combos {
    // Tab and ESC
    J_K_LAYER,
    F_J_LAYER,

    // Mod Keys
    M_L_LAYER,

    // CTRL
    S_D_LAYER,

    // CMD and option
    C_V_LAYER,
    E_R_LAYER,

    // Mouse

    COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;
// ESC and TAB layer
const uint16_t PROGMEM j_k_layer[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM f_j_layer[] = {KC_F, KC_J, COMBO_END};
// MOD Keys
const uint16_t PROGMEM m_l_layer[] = {KC_M, KC_L, COMBO_END};
// CNTRL
const uint16_t PROGMEM s_d_layer[] = {KC_S, KC_D, COMBO_END};

const uint16_t PROGMEM e_r_layer[] = {KC_E, KC_R, COMBO_END};

const uint16_t PROGMEM c_v_layer[] = {KC_C, KC_V, COMBO_END};

combo_t key_combos[] = {
    // ESC and TAB layer
    [J_K_LAYER] = COMBO(j_k_layer, KC_TAB),
    [F_J_LAYER] = COMBO(f_j_layer, KC_ESC),

    // MOD Layers
    [M_L_LAYER] = COMBO(m_l_layer, MO(4)),
   // CNTRL
    [S_D_LAYER] = COMBO(s_d_layer, OSM(MOD_LCTL)),

    [E_R_LAYER] = COMBO(e_r_layer, OSM(MOD_LALT)),

    [C_V_LAYER] = COMBO(c_v_layer, OSM(MOD_LGUI)),
};

#ifdef OLED_ENABLE
#endif // OLED_ENABLE
