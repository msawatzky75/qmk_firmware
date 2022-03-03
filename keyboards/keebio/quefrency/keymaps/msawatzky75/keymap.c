#include QMK_KEYBOARD_H
#include "msawatzky75.h"

extern keymap_config_t keymap_config;

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};
// layout based from https://config.qmk.fm/#/keebio/quefrency/rev3/LAYOUT_65_with_macro and http://www.keyboard-layout-editor.com/#/gists/af508840e15315503bb5f74b986e433a

// GUI comments are 12 characters representing 1u
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // needs 82 arguments
  [_DVORAK] = LAYOUT_65_with_macro(
// ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐            ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐
KC_MEDIA_PLAY_PAUSE,KC_GRV ,KC_ESC     ,KC_1       ,KC_2       ,KC_3       ,KC_4       ,KC_5       ,KC_6       ,             KC_7       ,KC_8       ,KC_9       ,KC_0       ,KC_LBRC    ,KC_RBRC    ,KC_BSPC    ,KC_BSPC    ,KC_HOME    ,
// ├───────────┼───────────┼───────────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┘      ┌─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴───────────┼───────────┤
    TO(_DVORAK),MO(_MISC)  ,KC_TAB           ,KC_QUOT    ,KC_COMM    ,KC_DOT     ,KC_P       ,KC_Y       ,             KC_F       ,KC_G       ,KC_C       ,KC_R       ,KC_L       ,KC_SLSH    ,KC_EQL     ,KC_BSLS          ,KC_END     ,
// ├───────────┼───────────┼─────────────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┐         └──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴─────────────────┼───────────┤
    TO(_QWERTY),MO(_MISC)  ,KC_BSPC             ,KC_A       ,KC_O       ,KC_E       ,KC_U       ,KC_I       ,             KC_D       ,KC_H       ,KC_T       ,KC_N       ,KC_S       ,KC_MINS    ,KC_ENT                    ,KC_PGUP    ,
// ├───────────┼───────────┼────────────────────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┐      └─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴──────────────┬───────────┼───────────┤
    TO(_COLEMAK),MO(_MISC) ,KC_LSFT                   ,KC_SCLN    ,KC_Q       ,KC_J       ,KC_K       ,KC_X       ,             KC_B       ,KC_M       ,KC_W       ,KC_V       ,KC_Z       ,KC_RSFT             ,KC_UP      ,KC_PGDN    ,
// ├───────────┼───────────┼──────────────┬───────────┴──┬────────┴─────┬─────┴────────┬──┴───────────┴───────────┘            ├───────────┴───────────┴────────┬──┴────────┬──┴────────┬──┴────────┬───────────┼───────────┼───────────┤
    MO(_MISC)  ,MO(_MISC)  ,KC_LCTL       ,KC_LGUI       ,KC_LALT       ,KC_SPC        ,KC_GRV                    ,             KC_SPC,KC_SPC                   ,KC_RCTL    ,KC_RALT    ,KC_RGUI    ,KC_LEFT    ,KC_DOWN    ,KC_RGHT
// └───────────┴───────────┴──────────────┴──────────────┴──────────────┴──────────────┴──────────────────────────┘            └────────────────────────────────┴───────────┴───────────┴───────────┴───────────┴───────────┴───────────┘
  ),

  [_QWERTY] = LAYOUT_65_with_macro(
// ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐            ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐
    KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,             KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_MINS    ,KC_EQL     ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,
// ├───────────┼───────────┼───────────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┘      ┌─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴───────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS          ,KC_Q       ,KC_W       ,KC_E       ,KC_R       ,KC_T       ,             KC_Y       ,KC_U       ,KC_I       ,KC_O       ,KC_P       ,KC_LBRC    ,KC_RBRC    ,KC_BSLS          ,KC_TRNS    ,
// ├───────────┼───────────┼─────────────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┐         └──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴─────────────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS             ,KC_A       ,KC_S       ,KC_D       ,KC_F       ,KC_G       ,             KC_H       ,KC_J       ,KC_K       ,KC_L       ,KC_SCLN    ,KC_QUOT    ,KC_ENT                    ,KC_TRNS    ,
// ├───────────┼───────────┼────────────────────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┐      └─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴──────────────┬───────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS                   ,KC_Z       ,KC_X       ,KC_C       ,KC_V       ,KC_B       ,             KC_N       ,KC_M       ,KC_COMM    ,KC_DOT     ,KC_SLASH   ,KC_RSFT             ,KC_UP      ,KC_TRNS    ,
// ├───────────┼───────────┼──────────────┬───────────┴──┬────────┴─────┬─────┴────────┬──┴───────────┴───────────┘            ├───────────┴───────────┴────────┬──┴────────┬──┴────────┬──┴────────┬───────────┼───────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS       ,KC_TRNS       ,KC_TRNS       ,KC_TRNS       ,KC_TRNS                   ,             KC_TRNS,KC_TRNS                 ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
// └───────────┴───────────┴──────────────┴──────────────┴──────────────┴──────────────┴──────────────────────────┘            └────────────────────────────────┴───────────┴───────────┴───────────┴───────────┴───────────┴───────────┘
  ),

  [_COLEMAK] = LAYOUT_65_with_macro(
// ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐            ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐
    KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,             KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_MINS    ,KC_EQL     ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,
// ├───────────┼───────────┼───────────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┘      ┌─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴───────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS          ,KC_Q       ,KC_W       ,KC_F       ,KC_P       ,KC_G       ,             KC_J       ,KC_L       ,KC_U       ,KC_Y       ,KC_SCLN    ,KC_LBRC    ,KC_RBRC    ,KC_BSLS          ,KC_TRNS    ,
// ├───────────┼───────────┼─────────────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┐         └──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴─────────────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS             ,KC_A       ,KC_R       ,KC_S       ,KC_T       ,KC_D       ,             KC_H       ,KC_N       ,KC_E       ,KC_I       ,KC_O       ,KC_QUOT    ,KC_ENT                    ,KC_TRNS    ,
// ├───────────┼───────────┼────────────────────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┐      └─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴──────────────┬───────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS                   ,KC_Z       ,KC_X       ,KC_C       ,KC_V       ,KC_B       ,             KC_K       ,KC_M       ,KC_COMM    ,KC_DOT     ,KC_SLASH   ,KC_TRNS             ,KC_TRNS    ,KC_TRNS    ,
// ├───────────┼───────────┼──────────────┬───────────┴──┬────────┴─────┬─────┴────────┬──┴───────────┴───────────┘            ├───────────┴───────────┴────────┬──┴────────┬──┴────────┬──┴────────┬───────────┼───────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS       ,KC_TRNS       ,KC_TRNS       ,KC_TRNS       ,KC_TRNS                   ,             KC_TRNS,KC_TRNS                 ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
// └───────────┴───────────┴──────────────┴──────────────┴──────────────┴──────────────┴──────────────────────────┘            └────────────────────────────────┴───────────┴───────────┴───────────┴───────────┴───────────┴───────────┘
  ),

  [_MISC] = LAYOUT_65_with_macro(
// ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐            ┌───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┬───────────┐
    KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_F1      ,KC_F2      ,KC_F3      ,KC_F4      ,KC_F5      ,KC_F6      ,             KC_F7      ,KC_F8      ,KC_F9      ,KC_F10     ,KC_F11     ,KC_F12     ,KC_TRNS    ,KC_DEL     ,KC_PSCR    ,
// ├───────────┼───────────┼───────────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┘      ┌─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴───────────┼───────────┘
    KC_TRNS    ,KC_TRNS    ,KC_TRNS          ,KC_TRNS    ,KC_TRNS    ,KC_TRNS     ,KC_TRNS   ,KC_TRNS    ,             KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS          ,KC_TRNS    ,
// ├───────────┼───────────┼─────────────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┐         └──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴──┬────────┴─────────────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS             ,KC_PASTE   ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,             KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS                   ,KC_TRNS    ,
// ├───────────┼───────────┼────────────────────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┐      └─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────┴──────────────┬───────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS                   ,KC_SYSTEM_POWER,KC_TRNS,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,             KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS             ,KC_TRNS    ,KC_TRNS    ,
// ├───────────┼───────────┼──────────────┬───────────┴──┬────────┴─────┬─────┴────────┬──┴───────────┴───────────┘            ├───────────┴───────────┴────────┬──┴────────┬──┴────────┬──┴────────┬───────────┼───────────┼───────────┤
    KC_TRNS    ,KC_TRNS    ,KC_TRNS       ,KC_TRNS       ,KC_TRNS       ,KC_TRNS       ,KC_TRNS                   ,             KC_DEL,KC_DEL                   ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
// └───────────┴───────────┴──────────────┴──────────────┴──────────────┴──────────────┴──────────────────────────┘            └────────────────────────────────┴───────────┴───────────┴───────────┴───────────┴───────────┴───────────┘
  ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    else if (index == 2) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}
