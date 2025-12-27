int smallest_change(int* arr, int length) {
    int out = 0;
    for (int i = 0; i < length - 1 - i; i++)
        if (arr[i] != arr[length - 1 - i])
            out += 1;
    return out;
}
