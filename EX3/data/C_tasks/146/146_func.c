int int_length(int n) {
    int len = 0;
    if (n == 0) return 1;
    if (n < 0) n = -n;
    while (n > 0) {
        n /= 10;
        len++;
    }
    return len;
}

void int_to_str(int n, char* buf) {
    int neg = 0;
    int len = int_length(n);
    int i = len - 1;
    if (n < 0) {
        neg = 1;
        n = -n;
    }
    buf[len] = '\0';
    if (n == 0) {
        buf[0] = '0';
        buf[1] = '\0';
        return;
    }
    while (n > 0 && i >= 0) {
        buf[i] = (char)('0' + (n % 10));
        n /= 10;
        i--;
    }
    // (Negative numbers not expected for this problem)
}

int specialFilter(const int* nums, int nums_len) {
    int num = 0;
    int i;
    for (i = 0; i < nums_len; i++) {
        if (nums[i] > 10) {
            char w[12]; // Enough for 32-bit int
            int_to_str(nums[i], w);
            int j = 0;
            while (w[j] != '\0') j++;
            if ((w[0]%2 == 1) && (w[j-1]%2 == 1))
                num += 1;
        }
    }
    return num;
}
