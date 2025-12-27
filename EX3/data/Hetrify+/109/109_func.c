int move_one_ball(const int* arr, int n) {
    int num = 0;
    int i;
    if (n == 0) return 1; // true
    for (i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) num += 1;
    }
    if (arr[n-1] > arr[0]) num += 1;
    if (num < 2) return 1; // true
    return 0; // false
}
