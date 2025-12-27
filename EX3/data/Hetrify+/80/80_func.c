int string_length(const char* s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

int is_happy(const char* s) {
    int len = string_length(s);
    if (len < 3) return 0;
    for (int i = 2; i < len; i++) {
        if (s[i] == s[i-1] || s[i] == s[i-2])
            return 0;
    }
    return 1;
}
