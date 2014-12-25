#include <stdio.h>

int main(void) {
    int num, yes = 0, n0, n1, n2;
    scanf("%d", &num);
    while (num != 99) {
        n2 = num / 100;
        n1 = num % 100 / 10;
        n0 = num % 10;
        if (n0 * n0 * n0 + n1 * n1 * n1 + n2 * n2 * n2 == num) {
            yes = 1;
            printf("%d\n", num);
            break;
        }
        num--;
    }
    if (yes == 0)
        printf("Doesn't exist\n");

    return 0;
}
