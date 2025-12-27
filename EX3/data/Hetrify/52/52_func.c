int below_threshold(int *l, int length, int t) {
    for (int i = 0; i < length; i++) {
        if (l[i] >= t) {
            return 0;  // false
        }
    }
    return 1;  // true
}
