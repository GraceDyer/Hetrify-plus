int prod_signs(int* arr, unsigned int length) {
    if (length == 0) return -32768;
    unsigned int i;
    int sum = 0, prods = 1;

    for (i = 0; i < length; i++) {
        int val = arr[i];
        sum += (val < 0) ? -val : val;  // Calculating absolute value
        if (val == 0) prods = 0;
        if (val < 0) prods = -prods;
    }
    return sum * prods;
}
