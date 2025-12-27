int c_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int digitSum(const char *s) {
    int sum = 0;
    int length = c_strlen(s);
    int i;
    for (i = 0; i < length; i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            sum += s[i];
        }
    }
    return sum;
}
