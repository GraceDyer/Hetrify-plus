void largest_smallest_integers(const int* lst, int lst_len, int* result) {
    int maxneg = 0;
    int minpos = 0;
    int i;
    for (i = 0; i < lst_len; i++) {
        if (lst[i] < 0 && (maxneg == 0 || lst[i] > maxneg)) {
            maxneg = lst[i];
        }
        if (lst[i] > 0 && (minpos == 0 || lst[i] < minpos)) {
            minpos = lst[i];
        }
    }
    result[0] = maxneg;
    result[1] = minpos;
}
