int str_len(const char* s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

int correct_bracketing(const char* brackets) {
    int level = 0;
    int i;
    int n = str_len(brackets);
    for (i = 0; i < n; i++) {
        if (brackets[i] == '(') level += 1;
        if (brackets[i] == ')') level -= 1;
        if (level < 0) return 0;
    }
    if (level != 0) return 0;
    return 1;
}
