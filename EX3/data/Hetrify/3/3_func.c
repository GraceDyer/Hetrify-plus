_Bool below_zero(int* operations, unsigned int length) {
    int num = 0;
    for (unsigned int i = 0; i < length; i++) {
        num += operations[i];
        if (num < 0) {
            return 1; // true
        }
    }
    return 0; // false
}
