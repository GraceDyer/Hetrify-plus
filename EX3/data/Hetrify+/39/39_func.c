int is_prime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int prime_fib(int n) {
    int f1 = 1, f2 = 2;
    int count = 0;
    int m;

    while (count < n) {
        m = f1 + f2;
        f1 = f2;
        f2 = m;

        if (is_prime(f1)) {
            count += 1;
        }

        if (count == n) {
            return f1;
        }
    }

    return -1; // This line is just a safeguard. Realistically, it should never be reached.
}
