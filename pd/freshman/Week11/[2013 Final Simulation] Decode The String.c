#include <stdio.h>
#include <string.h>

int main(void) {
    int rep = 0, i, j;
    char str[2001];
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            rep = rep * 10 + str[i] - '0';
        } else if (rep == 0) {
            printf("%c", str[i]);
        } else {
            for (j = 0; j < rep; j++)
                printf("%c", str[i]);
            rep = 0;
        }
    }
    printf("\n");
    return 0;
}
