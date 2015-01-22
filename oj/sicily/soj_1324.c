#include <stdio.h>
#include <string.h>

int main(void) {
    int t, sum, i, j;
    char str[80];
    scanf("%d", &t);
    while (t--) {
        sum = 0;
        j = 0;
        scanf("%s", str);
        for (i = 0; i < strlen(str); ++i) {
            if (str[i] == 'O')
                sum += ++j;
            else
                j = 0;
        }
        printf("%d\n", sum);
    }
    return 0;
}