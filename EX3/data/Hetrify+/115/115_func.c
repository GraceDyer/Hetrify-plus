int max_fill(int **grid, int grid_rows, int *grid_cols, int capacity) {
    int out = 0;
    for (int i = 0; i < grid_rows; i++) {
        int sum = 0;
        for (int j = 0; j < grid_cols[i]; j++)
            sum += grid[i][j];
        if (sum > 0)
            out += (sum - 1) / capacity + 1;
    }
    return out;
}
