int* sort_array(int* array, int length) {
    int i, j, temp;
    
    /* If the array is empty, just return the same pointer (nothing to sort). */
    if (length == 0) {
        return array;
    }
    
    /* Compute the sum of the first and last elements. */
    int sum = array[0] + array[length - 1];
    
    /* Bubble sort in ascending order. */
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    /* If the sum is even, reverse the array to get descending order. */
    if ((sum % 2) == 0) {
        for (i = 0; i < length / 2; i++) {
            temp = array[i];
            array[i] = array[length - 1 - i];
            array[length - 1 - i] = temp;
        }
    }
    
    /* Return the (possibly reordered) array pointer. */
    return array;
}
