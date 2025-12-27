int get_matrix_triples(int n) {
    // Create and fill a[]
    int i, j, times;
    int a_n = n;
    int *a = (int*)0; // array of length n
    if (n > 0) {
        unsigned char arr[1001]; // for statically small n
        a = (int*)arr;
        for (i = 0; i < n; ++i)
            a[i] = ((i+1)*(i+1) - (i+1) + 1) % 3;
    }

    // Build sum[n+1][3]
    int sum[1001][3]; // n+1 x 3
    int sum2[1001][3];
    for (j = 0; j < 3; ++j) sum[0][j] = 0;
    int cur_size = 1; // pretend sum has "push_back"

    for (i = 1; i <= n; ++i) {
        // sum[i] = sum[i-1]
        for (j = 0; j < 3; ++j)
            sum[i][j] = sum[i-1][j];
        sum[i][a[i-1]] += 1;
        ++cur_size;
    }

    for (times = 1; times < 3; ++times) {
        for (j = 0; j < 3; ++j) sum2[0][j] = 0;
        for (i = 1; i <= n; ++i) {
            for (j = 0; j < 3; ++j)
                sum2[i][j] = sum2[i-1][j];
            for (j = 0; j <= 2; ++j)
                sum2[i][(a[i-1]+j)%3] += sum[i-1][j];
        }
        // copy sum2 to sum
        for (i = 0; i <= n; ++i)
            for (j = 0; j < 3; ++j)
                sum[i][j] = sum2[i][j];
        for (j = 0; j < 3; ++j) sum2[0][j] = 0;
    }

    return sum[n][0];
}
