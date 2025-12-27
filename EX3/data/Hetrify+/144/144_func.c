#include <stdbool.h>

int simplified_strlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int simplified_atoi(const char *str) {
    int num = 0;
    int i = 0;
    bool isNegative = false;

    if (str[0] == '-') {
        isNegative = true;
        i++;
    }

    for (; str[i] != '\0'; ++i) {
        num = num * 10 + (str[i] - '0');
    }

    return isNegative ? -num : num;
}

bool simplify(const char *x, const char *n) {
    int a = 0, b = 0, c = 0, d = 0;
    int i;
    
    // Parse x
    for (i = 0; i < simplified_strlen(x); i++) {
        if (x[i] == '/') {
            char temp[20];  // assuming numbers will not be longer than 20 chars
            int j;

            for (j = 0; j < i; j++) {
                temp[j] = x[j];
            }
            temp[j] = '\0';
            a = simplified_atoi(temp);

            int k = 0;
            for (j = i + 1; j < simplified_strlen(x); j++, k++) {
                temp[k] = x[j];
            }
            temp[k] = '\0';
            b = simplified_atoi(temp);
        }
    }

    // Parse n
    for (i = 0; i < simplified_strlen(n); i++) {
        if (n[i] == '/') {
            char temp[20];
            int j;

            for (j = 0; j < i; j++) {
                temp[j] = n[j];
            }
            temp[j] = '\0';
            c = simplified_atoi(temp);

            int k = 0;
            for (j = i + 1; j < simplified_strlen(n); j++, k++) {
                temp[k] = n[j];
            }
            temp[k] = '\0';
            d = simplified_atoi(temp);
        }
    }

    // Check the simplification condition
    if ((a * c) % (b * d) == 0) {
        return true;
    }
    return false;
}
