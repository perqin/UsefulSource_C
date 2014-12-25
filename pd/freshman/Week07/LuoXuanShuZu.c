#include <stdio.h>

int box[102][102];
int m_row[4] = {0, 1, 0, -1};
int m_col[4] = {1, 0, -1, 0};

int main(void) {
    int i, j, n, d = 0; /* direction : 0 - right, 1 - down, 2 - left, 3 - up */
    scanf("%d", &n);
    for (i = 0; i <= n + 1; i++) {
        box[0][i] = -1;
        box[n + 1][i] = -1;
    }
    for (i = 1; i <= n; i++) {
        box[i][0] = -1;
        box[i][n + 1] = -1;
    }
    i = 1;
    int row = 1, col = 1;
    while (i <= n * n) {
        box[row][col] = i;
        if (box[row + m_row[d]][col + m_col[d]] != 0)
            d = (d == 3 ? 0 : d + 1);
        row += m_row[d];
        col += m_col[d];
        i++;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j < n; j++)
            printf("%d ", box[i][j]);
        printf("%d\n", box[i][n]);
    }

    return 0;
}
