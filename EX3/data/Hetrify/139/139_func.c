long long special_factorial(int n) {
    long long fact = 1, bfact = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
        bfact = bfact * fact;
    }
    return bfact;
}
