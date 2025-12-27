int strlen_c(const char* str) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

int prime_length(const char* str) {
    int l, i;
    l = strlen_c(str);
    if (l < 2) return 0;
    for (i = 2; i * i <= l; i++)
        if (l % i == 0) return 0;
    return 1;
}
