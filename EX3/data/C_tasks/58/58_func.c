int is_in_array(const int* arr, int arr_len, int value) {
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] == value)
            return 1;
    }
    return 0;
}

// Outputs sorted, unique common elements of l1[0..len1-1] and l2[0..len2-1]
// The caller must provide out[] with at least min(len1,len2) capacity.
// Returns number of elements written to out[].
int common(const int* l1, int len1, const int* l2, int len2, int* out) {
    int out_len = 0;

    // Collect unique common elements
    for (int i = 0; i < len1; i++) {
        int val = l1[i];
        if (!is_in_array(out, out_len, val)) {
            if (is_in_array(l2, len2, val)) {
                out[out_len++] = val;
            }
        }
    }

    // Simple insertion sort
    for (int i = 1; i < out_len; i++) {
        int key = out[i];
        int j = i - 1;
        while (j >= 0 && out[j] > key) {
            out[j + 1] = out[j];
            j--;
        }
        out[j + 1] = key;
    }

    return out_len;
}
