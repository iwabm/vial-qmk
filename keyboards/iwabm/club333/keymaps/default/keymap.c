#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][3][12] = {
    /* Default QWERTY layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬──────┐
     * │Esc│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ BkS  │
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┤
     * │Tab │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Enter   │
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───────┤
     * │LShift│ Z │ X │ C │ V │ B │ N │ M │ Space │ RGUI  │
     * └──────┴───┴───┴───┴───┴───┴───┴───┴───────┴───────┘
     */

    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,      KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,     KC_L,    KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_SPACE, KC_RGUI
    ),

    /* Main Numbers, Symbols & Function Layer (MOMENTARY)
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬──────┐
     * │Esc│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ BkS  │
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┤
     * │Tab │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Enter   │
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───────┤
     * │LShift│ Z │ X │ C │ V │ B │ N │ M │ Space │ RGUI  │
     * └──────┴───┴───┴───┴───┴───┴───┴───┴───────┴───────┘
     */

    [1] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,      KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,     KC_L,    KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_SPACE, KC_RGUI
    ),

    /* Main Numbers, Symbols & Function Layer (MOMENTARY)
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬──────┐
     * │Esc│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ BkS  │
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┤
     * │Tab │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Enter   │
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───────┤
     * │LShift│ Z │ X │ C │ V │ B │ N │ M │ Space │ RGUI  │
     * └──────┴───┴───┴───┴───┴───┴───┴───┴───────┴───────┘
     */

    [2] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,      KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,     KC_L,    KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_SPACE, KC_RGUI
    ),

    /* Main Numbers, Symbols & Function Layer (MOMENTARY)
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬──────┐
     * │Esc│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ BkS  │
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴──────┤
     * │Tab │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Enter   │
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───────┤
     * │LShift│ Z │ X │ C │ V │ B │ N │ M │ Space │ RGUI  │
     * └──────┴───┴───┴───┴───┴───┴───┴───┴───────┴───────┘
     */

    [3] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,      KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,     KC_L,    KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_SPACE, KC_RGUI
    )
};