#include <stdio.h>

void printBinary(unsigned int n) {
    int i;
    for (i = 31; i >= 0; i--) {
        printf("%c", ((n >> i) & 1) + '0');
        if (i % 8 == 0 && i != 0)
            printf(" ");
    }
    printf("\n");
}
