enum combo_events {
  EM_EMAIL,
  EM_EMAIL_COM,
  EM_EMAIL_TEST,
//   CONST_COMBO,
//   ING_COMBO,
};

const uint16_t PROGMEM email_combo[] = {KC_ENTER, KC_M, COMBO_END};
const uint16_t PROGMEM email_combo_com[] = {KC_ENTER, KC_H, COMBO_END};
const uint16_t PROGMEM email_combo_test[] = {KC_ENTER, KC_T, COMBO_END};
pf


// const uint16_t PROGMEM const_combo[] = {KC_ENTER, KC_C, COMBO_END};

// const uint16_t PROGMEM ing_combo[] = {KC_ENTER, KC_Q, COMBO_END};
// combo_t key_combos[] = {
//   [EM_EMAIL] = COMBO_ACTION(email_combo),
//   [BSPC_LSFT_CLEAR] = COMBO_ACTION(clear_line_combo),
// };
/* COMBO_ACTION(x) is same as COMBO(x, KC_NO) */

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case EM_EMAIL:
      if (pressed) {
        SEND_STRING("filiphalas74@gmail.com");
      }
      break;
    case EM_EMAIL_COM:
      if (pressed) {
        SEND_STRING("filip@filiphalas.com");
      }
      break;
    case EM_EMAIL_TEST:
      if (pressed) {
        SEND_STRING("test+filiphalas74@gmail.com");
      }
      break;
    // case CONST_COMBO:
    //   if (pressed) {
    //     SEND_STRING("const ");
    //   }
    //   break;
    // case ING_COMBO:
    //   if (pressed) {
    //     SEND_STRING("ing ");
    //   }
    //   break;
  }
}