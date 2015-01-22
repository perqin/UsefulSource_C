#include <stdio.h>

int main(void) {
    int n, k, i, m, total;
    scanf("%d", &n);
    while (n--) {
        total = 1;
        scanf("%d", &k);
        for (i = 0; i < k; ++i)
        {
            scanf("%d", &m);
            total += m - 1;
        }
        printf("%d\n", total);
    }
    return 0;
}