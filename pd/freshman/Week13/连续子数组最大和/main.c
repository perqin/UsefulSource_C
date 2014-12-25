#include <stdio.h>

int main(void) {
    int n, m, i, h, t, sum, max, arr[100];
    scanf("%d", &n);
    while (n) {
        scanf("%d", &m);
        for (i = 0; i < m; i++)
            scanf("%d", &arr[i]);
        max = -2147483648;
        for (h = 0; h < m; h++)
            for (t = h; t < m; t++) {
                sum = 0;
                for (i = h; i <= t; i++)
                    sum += arr[i];
                if (sum > max)
                    max = sum;
            }
        printf("%d\n", max);
        n--;
    }
}
