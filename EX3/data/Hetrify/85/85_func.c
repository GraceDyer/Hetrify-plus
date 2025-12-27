int add(int* lst, int lst_length) {
    int sum = 0;
    for (int i = 0; i * 2 + 1 < lst_length; i++) {
        if (lst[i * 2 + 1] % 2 == 0) {
            sum += lst[i * 2 + 1];
        }
    }
    return sum;
}
