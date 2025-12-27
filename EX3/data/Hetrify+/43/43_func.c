int pairs_sum_to_zero(int *l, unsigned int length) {
    for (unsigned int i = 0; i < length; i++)
        for (unsigned int j = i + 1; j < length; j++)
            if (l[i] + l[j] == 0) 
                return 1; // true
    return 0; // false
}
