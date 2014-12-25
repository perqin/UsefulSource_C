#include <stdio.h>

int main(void) {
    int num, fac, total = 0;
    scanf("%d", &num);
    for (fac = 1; fac < num; fac++)
        if (num % fac == 0)
            total += fac;
    if (total == num)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
