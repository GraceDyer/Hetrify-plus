int abs_c(int n) {
    return n < 0 ? -n : n;
}

int int_to_str(int n, char* buf) {
    int len = 0, temp, i, start = 0;
    if (n == 0) {
        buf[0] = '0';
        buf[1] = '\0';
        return 1;
    }
    temp = n;
    if (n < 0) {
        buf[0] = '-';
        n = -n;
        len++;
        start = 1;
    }
    // Count digits
    int num = n, d = 0;
    while (num > 0) {
        num /= 10;
        d++;
    }
    for (i = 0; i < d; i++) {
        buf[start + d - 1 - i] = (n % 10) + '0';
        n /= 10;
    }
    buf[start + d] = '\0';
    return start + d;
}

// len: input and output length
void order_by_points(const int *nums, int len, int *result) {
    int i, j, temp, l;
    char s[15];
    int *sumdigit = (int*)0; // ensure only primitive types, declared below
    int sumd[256]; // Assume maximum 256 elements (adjust as needed)
    sumdigit = sumd;
    
    for(i = 0; i < len; i++) {
        int n = nums[i];
        int ab = abs_c(n);
        l = int_to_str(ab, s);
        int sum = 0;
        for(j = 1; j < l; j++)
            sum += (int)s[j] - 48;
        if (nums[i] > 0)
            sum += (int)s[0] - 48;
        else
            sum -= (int)s[0] - 48;
        sumdigit[i] = sum;
        result[i] = nums[i];
    }
    for (i = 0; i < len; i++)
        for (j = 1; j < len; j++)
            if (sumdigit[j-1] > sumdigit[j]) {
                temp = sumdigit[j];
                sumdigit[j] = sumdigit[j-1];
                sumdigit[j-1] = temp;
                temp = result[j];
                result[j] = result[j-1];
                result[j-1] = temp;
            }
}
