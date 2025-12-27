// Standard C99 function as per constraints (no includes, manual reimplementations)

int str_length(const char *txt) {
    int len = 0;
    while (txt[len] != '\0') len++;
    return len;
}

int is_letter(char chr) {
    return (chr >= 65 && chr <= 90) || (chr >= 97 && chr <= 122);
}

int check_if_last_char_is_a_letter(const char *txt) {
    int len = str_length(txt);
    if (len == 0) return 0;

    char chr = txt[len - 1];
    if (!is_letter(chr)) return 0;

    if (len == 1) return 1;

    chr = txt[len - 2];
    if (is_letter(chr)) return 0;

    return 1;
}
