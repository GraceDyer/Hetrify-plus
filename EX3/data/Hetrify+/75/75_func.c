int is_multiply_prime(int a) {
    int num = 0;
    int i;
    
    for (i = 2; i * i <= a; i++) {
        while (a % i == 0 && a > i) {
            a = a / i;
            num += 1;
        }
    }
    
    if (num == 2) return 1; // true is represented by 1 in C
    return 0; // false is represented by 0 in C
}
