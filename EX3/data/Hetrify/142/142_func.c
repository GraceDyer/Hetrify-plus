int sum_squares(int* lst, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        if (i % 3 == 0) {
            sum += lst[i] * lst[i];
        } else if (i % 4 == 0) {
            sum += lst[i] * lst[i] * lst[i];
        } else {
            sum += lst[i];
        }
    }
    return sum;
}
