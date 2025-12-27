int can_arrange(int* arr, int arr_len) {
    int max = -1;
    int i;
    for (i = 0; i < arr_len; i++) {
        if (arr[i] <= i) max = i;
    }
    return max;
}
