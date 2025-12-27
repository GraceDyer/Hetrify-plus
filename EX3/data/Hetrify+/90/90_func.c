int next_smallest(int* lst, int length) {
    int i, j, temp;
    
    /* Sort the array using bubble sort */
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (lst[j] > lst[j + 1]) {
                temp = lst[j];
                lst[j] = lst[j + 1];
                lst[j + 1] = temp;
            }
        }
    }
    
    /* Find the second smallest element */
    for (i = 1; i < length; i++) {
        if (lst[i] != lst[i - 1]) {
            return lst[i];
        }
    }
    
    return -1;
}
