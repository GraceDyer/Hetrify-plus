int string_length(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int to_integer(const char* str, int start, int len) {
    int num = 0;
    for (int i = 0; i < len; ++i) {
        num = num * 10 + (str[start + i] - '0');
    }
    return num;
}

int valid_date(const char* date) {
    int mm, dd, yy;
    if (string_length(date) != 10) return 0; // false
    for (int i = 0; i < 10; i++) {
        if (i == 2 || i == 5) {
            if (date[i] != '-') return 0; // false
        } else {
            if (date[i] < '0' || date[i] > '9') return 0; // false
        }
    }

    mm = to_integer(date, 0, 2);
    dd = to_integer(date, 3, 2);
    yy = to_integer(date, 6, 4);
  
    if (mm < 1 || mm > 12) return 0; // false
    if (dd < 1 || dd > 31) return 0; // false
    if (dd == 31 && (mm == 4 || mm == 6 || mm == 9 || mm == 11 || mm == 2)) return 0; // false
    if (dd == 30 && mm == 2) return 0; // false
  
    return 1; // true
}
