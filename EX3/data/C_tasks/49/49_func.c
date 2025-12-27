int modp(int n, int p) {
    int out = 1;
    int i;
    for (i = 0; i < n; i++) {
        out = (out * 2) % p;
    }
    return out;
}
