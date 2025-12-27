int starts_one_ends(int n) {
    if (n < 1) return 0;
    if (n == 1) return 1;
    int out = 18;
    for (int i = 2; i < n; i++)
        out = out * 10;
    return out;
}
