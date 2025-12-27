int abs_c(int x) {
    return x < 0 ? -x : x;
}

int iscuber(int a) {
    int a_abs = abs_c(a);
    for (int i = 0; i * i * i <= a_abs; i++) {
        if (i * i * i == a_abs) {
            return 1; // true in C
        }
    }
    return 0; // false in C
}
