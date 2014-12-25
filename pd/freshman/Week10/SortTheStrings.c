#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000][1000], *p[1000], *tmp;
    int i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
        p[i] = str[i];
    }
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(p[i], p[j]) > 0) {
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
    for (i = 0; i < n; i++)
        printf("%s\n", p[i]);
    return 0;
}
