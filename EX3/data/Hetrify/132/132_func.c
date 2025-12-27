int is_nested(const char *str) {
    /* Manual string length calculation (replaces strlen) */
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    /* Core logic translated from the C++ version */
    int count = 0;
    int maxcount = 0;
    int i;
    for (i = 0; i < length; i++) {
        if (str[i] == '[') {
            count++;
        } else if (str[i] == ']') {
            count--;
        }
        if (count < 0) {
            count = 0;
        }
        if (count > maxcount) {
            maxcount = count;
        }
        if (count <= maxcount - 2) {
            return 1; /* "true" in C */
        }
    }
    return 0; /* "false" in C */
}
