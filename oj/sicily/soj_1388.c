#include <stdio.h>

int main(void) {
    char c;
    int sum = 0, i = 0;
    scanf("%c", &c);
    while (c != '#') {
        if (c == '\n') {
            printf("%d\n", sum);
            sum = 0;
            i = 0;
        } else if (c != ' ') {
            sum += ++i * (c - 'A' + 1);
        } else {
            ++i;
        }
        scanf("%c", &c);
    }
    return 0;
}