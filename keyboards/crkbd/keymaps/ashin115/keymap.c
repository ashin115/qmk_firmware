#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, /*                                      */ KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TAB,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LGUI, KC_A, KC_S, KC_D, KC_F, KC_G, /*                                      */ KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, /*                                      */ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LALT,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                MO(2), OSM(MOD_LSFT), KC_ENT, /*                                       */ KC_SPC, MO(1), KC_BSPC
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
        XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_BTN1, /*                         */ XXXXXXX, XXXXXXX, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX,
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


    // CMD
    C_V_LAYER,

    COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;
// ESC and TAB layer
const uint16_t PROGMEM j_k_layer[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM f_j_layer[] = {KC_F, KC_J, COMBO_END};
// MOD Keys
const uint16_t PROGMEM m_l_layer[] = {KC_M, KC_L, COMBO_END};

const uint16_t PROGMEM c_v_layer[] = {KC_C, KC_V, COMBO_END};

combo_t key_combos[] = {
    // ESC and TAB layer
    [J_K_LAYER] = COMBO(j_k_layer, KC_TAB),
    [F_J_LAYER] = COMBO(f_j_layer, KC_ESC),

    // MOD Layers
    [M_L_LAYER] = COMBO(m_l_layer, MO(4)),

    [C_V_LAYER] = COMBO(c_v_layer, OSM(MOD_LGUI)),
};

enum layer_names {
    _MAC_DEFAULT,
    _MAC_NUM,
    _MAC_FUNC,
    _MAC_GAMING,
    _MAC_MOD,
};

#ifdef OLED_ENABLE

static char last_key[5] = "None";  // Variable to store the last key pressed
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }
    return rotation;
}


 static void render_logo(void) {
     static const char PROGMEM qmk_logo[] = {
         0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
         0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
         0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
     };

     oled_write_P(qmk_logo, false);
 }



bool oled_task_user(void) {


    if (is_keyboard_master()) {
        // Host Keyboard Layer Status
        oled_write_P(PSTR("Layer: "), false);

        switch (get_highest_layer(layer_state)) {
            case _MAC_DEFAULT:
                oled_write_P(PSTR("Default  |\n"), false);
                break;
            case _MAC_NUM:
                oled_write_P(PSTR("Number   |\n"), false);
                break;
            case _MAC_FUNC:
                oled_write_P(PSTR("Function |\n"), false);
                break;
            case _MAC_GAMING:
                oled_write_P(PSTR("Gaming   |\n"), false);
                break;
            case _MAC_MOD:
                oled_write_P(PSTR("Mod Keys |\n"), false);
                break;
            default:
                oled_write_ln_P(PSTR("Undefined  |\n"), false);
        }

        // Display the last key pressed
        oled_write_P(PSTR("-----------------\n"), false);

        // Display the last key pressed
        oled_write_P(PSTR("Last Key: "), false);
        oled_write_ln(last_key, false);
        //
    } else {
         render_logo();
        oled_scroll_left();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        // Clear the last_key variable
        memset(last_key, 0, sizeof(last_key));

        // Update the last_key variable with a human-readable name of the key
        switch (keycode) {
            case KC_A ... KC_Z:
                snprintf(last_key, sizeof(last_key), "%c", 'A' + (keycode - KC_A));
                break;
            case KC_1 ... KC_0:
                if (keycode == KC_0) {
                    snprintf(last_key, sizeof(last_key), "0");
                } else {
                    snprintf(last_key, sizeof(last_key), "%c", '1' + (keycode - KC_1));
                }
                break;
            case KC_ENTER:
                snprintf(last_key, sizeof(last_key), "ENT");
                break;
            case KC_SPACE:
                snprintf(last_key, sizeof(last_key), "SPC");
                break;
            case KC_TAB:
                snprintf(last_key, sizeof(last_key), "Tab");
                break;
            case KC_LGUI:
                snprintf(last_key, sizeof(last_key), "CMD");
                break;
            case KC_LCTL:
                snprintf(last_key, sizeof(last_key), "CNTRL");
                break;
            case KC_ESC:
                snprintf(last_key, sizeof(last_key), "ESC");
                break;
            // Add more cases as needed to cover other keycodes
            default:
                snprintf(last_key, sizeof(last_key), "0x%04X", keycode);
                break;
        }
    }
    return true;
}
#endif
