int abs(int x) {
    return x < 0 ? -x : x;
}

int count_nums(int* n, int length) {
    int num = 0;
    for (int i = 0; i < length; i++) {
        if (n[i] > 0) {
            num += 1;
        } else {
            int sum = 0;
            int w = abs(n[i]);
            while (w >= 10) {
                sum += w % 10;
                w = w / 10;
            }
            sum -= w;
            if (sum > 0) num += 1;
        }
    }
    return num;
}
