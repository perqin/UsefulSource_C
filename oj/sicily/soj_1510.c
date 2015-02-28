#include <stdio.h>
#include <string.h>

int main(void) {
    int n, i, j, p;
    char word[82];
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d %s", &p, word);
        printf("%d ", i + 1);
        for (j = 0; j < strlen(word); ++j)
            if (j + 1 != p)
                printf("%c", word[j]);
        printf("\n");
    }
    return 0;
}