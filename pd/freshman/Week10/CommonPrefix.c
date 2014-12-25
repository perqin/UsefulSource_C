#include <stdio.h>

void prefix(char* s1, char* s2) {
    int no = 1;
    while (*s1 == *s2) {
        no = 0;
        printf("%c", *s1);
        s1++;
        s2++;
    }
    if (no)
        printf("no common prefix");
    printf("\n");
}
