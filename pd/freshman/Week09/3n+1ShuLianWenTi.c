#include <stdio.h>

int main(void) {
    int max = 0, i, j, k, l, num;
    scanf("%d%d", &i, &j);
    for (k = i; k <= j; k++) {
        l = 1;
        num = k;
        while (num != 1) {
            l++;
            num = num % 2 ? 3 * num + 1 : num / 2;
        }
        if (l > max)
            max = l;
    }
    printf("%d\n", max);

    return 0;
}
