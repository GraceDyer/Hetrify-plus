int str_len(const char* s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

int find_char(const char* s, int len, char c) {
    for (int i = 0; i < len; i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

int same_chars(const char* s0, const char* s1) {
    int len0 = str_len(s0);
    int len1 = str_len(s1);
    for (int i = 0; i < len0; i++) {
        if (find_char(s1, len1, s0[i]) == -1) {
            return 0;
        }
    }
    for (int i = 0; i < len1; i++) {
        if (find_char(s0, len0, s1[i]) == -1) {
            return 0;
        }
    }
    return 1;
}
