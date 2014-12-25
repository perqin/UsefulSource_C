#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[11], s2[11];
    int i, alp1[128], alp2[128], no;
    scanf("%s %s", s1, s2);
    if (strlen(s1) != strlen(s2) || strcmp(s1, s2) == 0) {
        printf("NO\n");
    } else {
        for (i = 0; i < 128; i++) {
            alp1[i] = 0;
            alp2[i] = 0;
        }
        for (i = 0; i < strlen(s1); i++) {
            alp1[s1[i]]++;
            alp2[s2[i]]++;
        }
        no = 0;
        for (i = 0; i < 128; i++)
            if (alp1[i] != alp2[i]) {
                printf("NO\n");
                no = 1;
                break;
            }
        if (no == 0)
            printf("YES\n");
    }
    return 0;
}
