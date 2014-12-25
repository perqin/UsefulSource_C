#include <stdio.h>

int main(void) {
    int lft3, lft5, lft7, num = 1;
    scanf("%d%d%d", &lft3, &lft5, &lft7);
    while (!(num % 3 == lft3 && num % 5 == lft5 && num % 7 == lft7))
        num++;
    printf("%d\n", num);

    return 0;
}
