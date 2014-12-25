#include <stdio.h>

int num[10][10];

int main(void) {
    int n, i, j;
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Number %d is Out Of Range.\n", n);
    } else {
        for (i = 0; i < n; i++) {
            num[i][0] = 1;
            printf("1 ");
            for (j = 1; j <= i; j++) {
                num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
                printf("%d ", num[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
