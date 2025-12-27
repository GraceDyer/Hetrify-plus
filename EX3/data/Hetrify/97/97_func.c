int custom_abs(int x) {
    return x < 0 ? -x : x;
}

int multiply(int a, int b) {
    return (custom_abs(a) % 10) * (custom_abs(b) % 10);
}
