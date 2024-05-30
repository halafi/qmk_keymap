
void leader_end_user(void) {
    if (leader_sequence_one_key(KC_A)) {
        SEND_STRING("Ahoj, mám se dobře, díky za optání. Jak se máš ty?");
        return;
    }
    if (leader_sequence_one_key(KC_F)) {
        SEND_STRING("filiphalas74@gmail.com");
        return;
    }
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
    if (leader_sequence_one_key(KC_H)) {
        SEND_STRING("have");
        return;
    }
    if (leader_sequence_two_keys(KC_U, KC_D)) {
        SEND_STRING("you'd");
        return;
    }
    if (leader_sequence_two_keys(KC_U, KC_L)) {
        SEND_STRING("you'll");
        return;
    }
    if (leader_sequence_two_keys(KC_U, KC_R)) {
        SEND_STRING("you're");
        return;
    }
    if (leader_sequence_two_keys(KC_U, KC_F)) {
        SEND_STRING("you've");
        return;
    }
}