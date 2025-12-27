int will_it_fly(int* q, int length, int w) {
    int sum = 0;
    int i;
    
    for (i = 0; i < length; i++) {
        if (q[i] != q[length - 1 - i]) return 0;
        sum += q[i];
    }
    
    if (sum > w) return 0;
    return 1;
}
