
void leader_end_user(void) {
    // if (leader_sequence_two_keys(KC_S, KC_W)) { send_unicode_string("ý"); return; }
    // if (leader_sequence_two_keys(KC_S, KC_F)) { send_unicode_string("á"); return; }
    // if (leader_sequence_two_keys(KC_S, KC_P)) { send_unicode_string("í"); return; }
    // if (leader_sequence_two_keys(KC_S, KC_R)) { send_unicode_string("č"); return; }
    // if (leader_sequence_two_keys(KC_S, KC_S)) { send_unicode_string("ř"); return; }
    // if (leader_sequence_two_keys(KC_S, KC_T)) { send_unicode_string("ž"); return; }
    // if (leader_sequence_two_keys(KC_S, KC_X)) { send_unicode_string("+"); return; }
    // if (leader_sequence_two_keys(KC_S, KC_C)) { send_unicode_string("ě"); return; }
    // if (leader_sequence_two_keys(KC_S, KC_D)) { send_unicode_string("š"); return; }
    if (leader_sequence_two_keys(KC_S, KC_W)) { send_unicode_string("ý"); return; }
    if (leader_sequence_two_keys(KC_S, KC_F)) { send_unicode_string("á"); return; }
    if (leader_sequence_two_keys(KC_S, KC_P)) { send_unicode_string("í"); return; }
    if (leader_sequence_two_keys(KC_S, KC_R)) { send_unicode_string("č"); return; }
    if (leader_sequence_two_keys(KC_S, KC_S)) { send_unicode_string("ř"); return; }
    if (leader_sequence_two_keys(KC_S, KC_T)) { send_unicode_string("ž"); return; }
    if (leader_sequence_two_keys(KC_S, KC_X)) { send_unicode_string("+"); return; }
    if (leader_sequence_two_keys(KC_S, KC_C)) { send_unicode_string("ě"); return; }
    if (leader_sequence_two_keys(KC_S, KC_D)) { send_unicode_string("š"); return; }
    if (leader_sequence_two_keys(KC_S, KC_SPACE)) { send_unicode_string("é"); return; }
    if (leader_sequence_one_key(KC_A)) {
        send_unicode_string("Ahoj, mám se dobře, díky za optání. Jak se máš ty?");
        return;
    }
    // if (leader_sequence_one_key(KC_F)) {
    //     SEND_STRING("filiphalas74@gmail.com");
    //     return;
    // }
    if (leader_sequence_one_key(KC_G)) {
        SEND_STRING("=== ");
        return;
    }
    if (leader_sequence_one_key(KC_X)) {
        SEND_STRING("!== ");
        return;
    }
    if (leader_sequence_one_key(KC_DOT)) {
        SEND_STRING("=> ");
        return;
    }
}