int string_length(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int how_many_times(const char *str, const char *substring) {
    int out = 0;
    int str_len = string_length(str);
    int sub_len = string_length(substring);
    
    if (str_len == 0) return 0;

    for (int i = 0; i <= str_len - sub_len; i++) {
        int j;
        for (j = 0; j < sub_len; j++) {
            if (str[i + j] != substring[j]) {
                break;
            }
        }
        if (j == sub_len) {
            out += 1;
        }
    }
    return out;
}
