int c_strlen(const char* str, unsigned int length) {
    unsigned int i = 0;
    while (i < length && str[i] != '\0') {
        i++;
    }
    return i;
}
