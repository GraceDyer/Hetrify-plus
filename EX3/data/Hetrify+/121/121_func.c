int custom_abs(int x) {
    return x < 0 ? -x : x;
}

int solutions(int* lst, int length) {
    int sum = 0;
    int i;
    for (i = 0; i * 2 < length; i++) {
        if (custom_abs(lst[i * 2]) % 2 == 1) {
            sum += lst[i * 2];
        }
    }
    return sum;
}
