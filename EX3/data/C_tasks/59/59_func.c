int largest_prime_factor(int n) {
    int i;
    for (i = 2; i * i <= n; i++) {
        while (n % i == 0 && n > i) {
            n = n / i;
        }
    }
    return n;
}
