int sum(int col; int (*arr)[col], int row, int col) {
    int i, j, total = 0;
    for (i = 0; i < row; i++)
        total += arr[i][col - 1];
    return total;
}
