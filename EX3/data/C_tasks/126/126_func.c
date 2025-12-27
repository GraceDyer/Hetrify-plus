int is_sorted(int* lst, int length) {
    int i;
    for (i = 1; i < length; i++) {
        if (lst[i] < lst[i - 1]) return 0;
        if (i >= 2 && lst[i] == lst[i - 1] && lst[i] == lst[i - 2]) return 0;
    }
    return 1;
}
