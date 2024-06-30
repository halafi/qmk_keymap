#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#include "custom_keycodes.h"
#include "features/casemodes.h"
// #include "quantum.h"
#include "features/num_word.h"

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    NUMWORD,          RGUI(KC_R),     RGUI(RSFT(KC_C)),RALT(RGUI(KC_J)),RALT(RGUI(KC_5)),                                KC_LEFT,        KC_RIGHT,       TD(DANCE_1),    MAC_SIRI,       ST_MACRO_5,     ST_MACRO_6,
    LT(6,KC_TAB),   KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_QUOTE,        TD(DANCE_2),    
    ALL_T(KC_ESCAPE),MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LGUI, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RGUI, KC_E),LT(4,KC_I),     MT(MOD_RCTL, KC_O),ALL_T(KC_EQUAL),
    MEH_T(KC_GRAVE),LT(2,KC_Z),     KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         LT(5,KC_SLASH), MEH_T(KC_MINUS),
                                                    LT(1,KC_SPACE), QK_REP,                                       KC_ENTER,       LT(3,KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_MINUS), RGUI(KC_0),     LGUI(KC_EQUAL),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RCTL(RSFT(KC_G)),ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    LCTL(LSFT(KC_SPACE)),
    KC_TRANSPARENT, OSM(MOD_LCTL),  OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LSFT),  KC_TRANSPARENT,                                 RGUI(RSFT(KC_F)),KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       CW_TOGG,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RGUI(RSFT(KC_E)),KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         SNAKECASE,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_11,    KC_DELETE
  ),
  [2] = LAYOUT_voyager(
    QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_LLCK,                                        TO(7),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_HUI,        RGB_SAI,        RGB_SPI,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_BRIGHTNESS_UP,KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_BRIGHTNESS_DOWN,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MEDIA_STOP,  RGB_TOG,        RGB_HUD,        RGB_SAD,        RGB_SPD,        KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AUDIO_MUTE,  KC_MEDIA_PLAY_PAUSE
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_UP,          KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_G,           KC_SCLN,        KC_4,           KC_5,           KC_6,           KC_EQUAL,                                       KC_TRANSPARENT, OSM(MOD_RSFT),  OSM(MOD_RGUI),  OSM(MOD_RALT),  OSM(MOD_RCTL),  KC_TRANSPARENT,
    KC_DOWN,        KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_BSLS,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_0,           KC_MINUS,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_LABK,        KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RCBR,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_RABK,        KC_COLN,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,                                        KC_TRANSPARENT, OSM(MOD_RSFT),  OSM(MOD_RGUI),  KC_TRANSPARENT, OSM(MOD_RCTL),  KC_TRANSPARENT,
    KC_QUES,        KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_RPRN,        KC_UNDS,                                        KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    ST_MACRO_25,    ST_MACRO_26,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    ST_MACRO_27,    ST_MACRO_28,                                    KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, ST_MACRO_29,    ST_MACRO_30,    ST_MACRO_31,    ST_MACRO_32,    ST_MACRO_33,                                    ST_MACRO_51,    ST_MACRO_52,    ST_MACRO_53,    ST_MACRO_54,    ST_MACRO_55,    KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_34,    ST_MACRO_35,    ST_MACRO_36,    ST_MACRO_37,    ST_MACRO_38,                                    ST_MACRO_56,    ST_MACRO_57,    ST_MACRO_58,    ST_MACRO_59,    ST_MACRO_60,    KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_39,    ST_MACRO_40,    ST_MACRO_41,    ST_MACRO_42,    ST_MACRO_43,                                    ST_MACRO_61,    ST_MACRO_62,    ST_MACRO_63,    ST_MACRO_64,    ST_MACRO_65,    KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_44,    ST_MACRO_45,    ST_MACRO_46,    ST_MACRO_47,    ST_MACRO_48,                                    ST_MACRO_66,    ST_MACRO_67,    ST_MACRO_68,    ST_MACRO_69,    ST_MACRO_70,    KC_TRANSPARENT,
                                                    ST_MACRO_49,    ST_MACRO_50,                                    ST_MACRO_71,    ST_MACRO_72
  ),
  [7] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_3),
    KC_LEFT_ALT,    KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           MT(MOD_RALT, KC_EQUAL),
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_RIGHT_SHIFT,
    KC_LEFT_CTRL,   MT(MOD_LGUI, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           MT(MOD_RSFT, KC_M),MT(MOD_RGUI, KC_COMMA),MT(MOD_RALT, KC_DOT),MT(MOD_RCTL, KC_SLASH),KC_RIGHT_CTRL,
                                                    KC_SPACE,       KC_TAB,                                         KC_ENTER,       KC_BSPC
  ),
};

const uint16_t PROGMEM combo0[] = { KC_Q, MT(MOD_LCTL, KC_A), COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_RSFT, KC_N), MT(MOD_LSFT, KC_T), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_P, MT(MOD_LSFT, KC_T), COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_9, KC_6, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_W, MT(MOD_LALT, KC_R), COMBO_END};
const uint16_t PROGMEM combo6[] = { MT(MOD_LALT, KC_R), KC_X, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_6, KC_3, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_DLR, KC_EXLM, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_L, KC_P, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_0),
    COMBO(combo1, RGUI(RSFT(KC_SPACE))),
    COMBO(combo2, RALT(RGUI(KC_V))),
    COMBO(combo3, RGUI(KC_V)),
    COMBO(combo4, ST_MACRO_1),
    COMBO(combo5, RGUI(KC_C)),
    COMBO(combo6, RGUI(KC_X)),
    COMBO(combo7, ST_MACRO_2),
    COMBO(combo8, ST_MACRO_3),
    COMBO(combo9, ST_MACRO_4),
    COMBO(combo10, KC_CAPS),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ALL_T(KC_ESCAPE):
            return TAPPING_TERM -20;
        case MT(MOD_LSFT, KC_T):
            return TAPPING_TERM -20;
        case LT(1,KC_SPACE):
            return TAPPING_TERM -20;
        case LT(6,KC_TAB):
            return TAPPING_TERM -20;
        case LT(6,KC_EQUAL):
            return TAPPING_TERM -20;
        case MT(MOD_RSFT, KC_N):
            return TAPPING_TERM -20;
        case LT(3,KC_BSPC):
            return TAPPING_TERM -20;
        default:
            return TAPPING_TERM;
    }
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SNAKECASE:
    if (record->event.pressed) {
        enable_xcase_with(KC_UNDS);
    }
    return false;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_A)) SS_DELAY(100) SS_RGUI(SS_TAP(X_C)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_RSFT(SS_TAP(X_1)) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_V)) SS_DELAY(100) SS_RGUI(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_T))))) SS_DELAY(100) SS_LGUI(SS_TAP(X_O)) SS_DELAY(100) SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_O))))));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_T))))) SS_DELAY(100) SS_RGUI(SS_TAP(X_S)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC) SS_DELAY(100) SS_TAP(X_C));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC) SS_DELAY(100) SS_TAP(X_D));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RBRC) SS_DELAY(100) SS_TAP(X_D));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RBRC) SS_DELAY(100) SS_TAP(X_C));
    }
    break;
    case ST_MACRO_12:
      if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("Ú"); // Send capital variant
        } else {
            send_unicode_string("ú"); // Send lowercase variant
        }
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("Ý");
        } else {
            send_unicode_string("ý");
        }
    }
    break;
    case ST_MACRO_14:
   if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("Á");
        } else {
            send_unicode_string("á");
        }
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("Í");
        } else {
            send_unicode_string("í");
        }
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING("filip@filiphalas.com");
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("Ů");
        } else {
            send_unicode_string("ů");
        }
    }
    break;
    case ST_MACRO_18: // 4
    if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("Č");
        } else {
            send_unicode_string("č");
        }
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("Ř");
        } else {
            send_unicode_string("ř");
        }
    }
    break;
    case ST_MACRO_20:
     if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("Ž");
        } else {
            send_unicode_string("ž");
        }
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING("filiphalas74@gmail.com");
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING("604775787");
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING("+420");
    }
    break;
    case ST_MACRO_24: // 2
    if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("Ě");
        } else {
            send_unicode_string("ě");
        }
    }
    break;
    case ST_MACRO_25: // 3
     if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("Š");
        } else {
            send_unicode_string("š");
        }
    }
    break;
    case ST_MACRO_26:
     if (record->event.pressed) {
        SEND_STRING("reddit");
     }
    break;
    case ST_MACRO_27:
     if (record->event.pressed) {
        if (get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || host_keyboard_led_state().caps_lock || is_caps_word_on()) {
            send_unicode_string("É");
        } else {
            send_unicode_string("é");
        }
    }
    break;
    case ST_MACRO_28:
     if (record->event.pressed) {
        SEND_STRING("thought");
     }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      // TODO
      SEND_STRING(SS_TAP(X_A));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) {
      // TODO
      SEND_STRING(SS_TAP(X_B));
    }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) {
      // TODO
      SEND_STRING(SS_TAP(X_C));
    }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING("placehloder");
    }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) {
      // TODO
      SEND_STRING(SS_TAP(X_E));
    }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) {
      SEND_STRING("qwerty");
    }
    break;
    case ST_MACRO_35:
    if (record->event.pressed) {
      SEND_STRING("window");
    }
    break;
    case ST_MACRO_36:
    if (record->event.pressed) {
      SEND_STRING("function ");
    }
    break;
    case ST_MACRO_37:
    if (record->event.pressed) {
      SEND_STRING("new Promise((revolve, reject) => {");
    }
    break;
    case ST_MACRO_38:
    if (record->event.pressed) {
      SEND_STRING("boolean");
    }
    break;
    case ST_MACRO_39:
    if (record->event.pressed) {
      SEND_STRING("async ");
    }
    break;
    case ST_MACRO_40:
    if (record->event.pressed) {
      SEND_STRING("require('");
    }
    break;
    case ST_MACRO_41:
    if (record->event.pressed) {
      SEND_STRING("switch(");
    }
    break;
    case ST_MACRO_42:
    if (record->event.pressed) {
      SEND_STRING("try {\n");
    }
    break;
    case ST_MACRO_43:
    if (record->event.pressed) {
      SEND_STRING("catch(err) {\n");
    }
    break;
    case ST_MACRO_44:
    if (record->event.pressed) {
        // universal slot
      SEND_STRING("await ");
    }
    break;
    case ST_MACRO_45:
    if (record->event.pressed) {
        // universal slot
      SEND_STRING("Record<");
    }
    break;
    case ST_MACRO_46:
    if (record->event.pressed) {
      SEND_STRING("className=\"");
    }
    break;
    case ST_MACRO_47:
    if (record->event.pressed) {
      SEND_STRING("disabled=");
    }
    break;
    case ST_MACRO_48:
    if (record->event.pressed) {
      SEND_STRING("break;");
    }
    break;
    case ST_MACRO_49:
    if (record->event.pressed) {
      SEND_STRING("const ");
    }
    break;
    case ST_MACRO_50:
    if (record->event.pressed) {
      SEND_STRING("let ");
    }
    break;
    case ST_MACRO_51:
    if (record->event.pressed) {
      // TODO
      SEND_STRING(SS_TAP(X_A));
    }
    break;
    case ST_MACRO_52:
    if (record->event.pressed) {
      // TODO
      SEND_STRING(SS_TAP(X_B));
    }
    break;
    case ST_MACRO_53:
    if (record->event.pressed) {
      SEND_STRING(" ");
    }
    break;
    case ST_MACRO_54:
    if (record->event.pressed) {
      // TODO
      SEND_STRING(SS_TAP(X_D));
    }
    break;
    case ST_MACRO_55:
    if (record->event.pressed) {
      // TODO
      SEND_STRING(SS_TAP(X_E));
    }
    break;
    case ST_MACRO_56:
    if (record->event.pressed) {
      SEND_STRING("javascript ");
    }
    break;
    case ST_MACRO_57:
    if (record->event.pressed) {
      SEND_STRING("loading");
    }
    break;
    case ST_MACRO_58:
    if (record->event.pressed) {
      SEND_STRING("undefined");
    }
    break;
    case ST_MACRO_59:
    if (record->event.pressed) {
      SEND_STRING("if (");
    }
    break;
    case ST_MACRO_60:
    if (record->event.pressed) {
      SEND_STRING("else if (");
    }
    break;
    case ST_MACRO_61:
    if (record->event.pressed) {
      SEND_STRING("module.exports =");
    }
    break;
    case ST_MACRO_62:
    if (record->event.pressed) {
      SEND_STRING("null");
    }
    break;
    case ST_MACRO_63:
    if (record->event.pressed) {
      SEND_STRING("export");
    }
    break;
    case ST_MACRO_64:
    if (record->event.pressed) {
      SEND_STRING("import");
    }
    break;
    case ST_MACRO_65:
    if (record->event.pressed) {
      SEND_STRING("onChange=");
    }
    break;
    case ST_MACRO_66:
    if (record->event.pressed) {
      SEND_STRING("keyboard");
    }
    break;
    case ST_MACRO_67:
    if (record->event.pressed) {
      SEND_STRING("number");
    }
    break;
    case ST_MACRO_68:
    if (record->event.pressed) {
      SEND_STRING("// TODO: ");
    }
    break;
    case ST_MACRO_69:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B));
    }
    break;
    case ST_MACRO_70:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C));
    }
    break;
    case ST_MACRO_71:
    if (record->event.pressed) {
      SEND_STRING("true");
    }
    break;
    case ST_MACRO_72:
    if (record->event.pressed) {
      SEND_STRING("false");
    }
    break;
    case MAC_SIRI:
      HCS(0xCF);

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_SPACE));
        tap_code16(LALT(KC_SPACE));
        tap_code16(LALT(KC_SPACE));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_SPACE));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LALT(KC_SPACE)); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_SPACE)); register_code16(LALT(KC_SPACE));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_SPACE)); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_SPACE)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COLN);
        tap_code16(KC_COLN);
        tap_code16(KC_COLN);
    }
    if(state->count > 3) {
        tap_code16(KC_COLN);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_COLN); break;
        case SINGLE_HOLD: layer_on(6); break;
        case DOUBLE_TAP: register_code16(KC_COLN); register_code16(KC_COLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COLN); register_code16(KC_COLN);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_COLN); break;
        case SINGLE_HOLD:
          if(!is_layer_locked(6)) {
            layer_off(6);
          }
        break;
        case DOUBLE_TAP: unregister_code16(KC_COLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COLN); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
    }
    if(state->count > 3) {
        tap_code16(KC_MINUS);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_MINUS); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MINUS); register_code16(KC_MINUS);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_MINUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MINUS); break;
    }
    dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};
