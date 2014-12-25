#include <stdio.h>

int main(void) {
    int y, i = 2001, x = 1;
    scanf("%d", &y);
    while (++i <= y)
        if ((i - 1) % 400 == 0 || ((i - 1) % 100 != 0 && (i - 1) % 4 == 0))
            x += 2;
        else
            x++;
    printf("%d\n", x % 7);
    return 0;
}
