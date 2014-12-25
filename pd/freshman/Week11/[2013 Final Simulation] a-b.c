#include <stdio.h>
#include <string.h>

struct hp_num {
    int l, d[110];
};
typedef struct hp_num hpInt;

int main(void) {
    hpInt factor1, factor2, result, tmp;
    int i, neg = 0;
    char str[110];

    for (i = 0; i < 110; i++) {
        factor1.d[i] = 0;
        factor2.d[i] = 0;
        result.d[i] = 0;
    }

    scanf("%s", str);
    factor1.l = strlen(str);
    for (i = 0; i < factor1.l; i++)
        factor1.d[i] = str[factor1.l - 1 - i] - 48;
    scanf("%s", str);
    factor2.l = strlen(str);
    for (i = 0; i < factor2.l; i++)
        factor2.d[i] = str[factor2.l - 1 - i] - 48;

    if (factor1.l < factor2.l) {
        tmp = factor1;
        factor1 = factor2;
        factor2 = tmp;
        neg = 1;
    } else if (factor1.l == factor2.l) {
        i = factor1.l - 1;
        while (i >= 0 && factor1.d[i] == factor2.d[i])
            i--;
        if (i == -1) {
            printf("0\n");
            return 0;
        }
        if (factor1.d[i] < factor2.d[i]) {
            tmp = factor1;
            factor1 = factor2;
            factor2 = tmp;
            neg = 1;
        }
    }

    for (i = 0; i < factor1.l; i++) {
        if (factor1.d[i] < factor2.d[i]) {
            factor1.d[i] += 10;
            factor1.d[i + 1]--;
        }
        result.d[i] = factor1.d[i] - factor2.d[i];
    }

    for (i = factor1.l - 1; i >= 0; i--)
        if (result.d[i] != 0)
            break;
    if (neg)
        printf("-");
    while (i >= 0) {
        printf("%d", result.d[i]);
        i--;
    }
    printf("\n");

    return 0;
}
