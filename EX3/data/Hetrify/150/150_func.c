int x_or_y(int n, int x, int y) {
    int isp = 1;
    if (n < 2) isp = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isp = 0;
            break; // exit loop early if a divisor is found
        }
    }
    if (isp) return x;
    return y;
}
