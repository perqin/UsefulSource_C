#include <stdio.h>

int main(void) {
    int t, max, i, n;
    scanf("%d", &t);
    while (t) {
        max = -2147483648;
        for (i = 0; i < t; ++i)
        {
            scanf("%d", &n);
            if (n > max)
                max = n;
        }
        printf("%d\n", max);
        scanf("%d", &t);
    }
    return 0;
}