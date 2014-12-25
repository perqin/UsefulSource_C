#include <stdio.h>
#include <string.h>

struct hp_num {
    int l, d[400];
};
typedef struct hp_num hpInt;

int main(void) {
    hpInt factor1, factor2, result;
    int i, j;
    char str[200];
    scanf("%s", str);
    factor1.l = strlen(str);
    for (i = 0; i < factor1.l; i++)
        factor1.d[i] = str[factor1.l - 1 - i] - 48;
    scanf("%s", str);
    factor2.l = strlen(str);
    for (i = 0; i < factor2.l; i++)
        factor2.d[i] = str[factor2.l - 1 - i] - 48;
    for (i = 0; i < factor1.l + factor2.l; i++)
        result.d[i] = 0;
    for (i = 0; i < factor2.l; i++) {
        for (j = 0; j < factor1.l; j++) {
            result.d[i + j] += factor2.d[i] * factor1.d[j];
            result.d[i + j + 1] += result.d[i + j] / 10;
            result.d[i + j] %= 10;
        }
    }
    for (i = 0; i < factor1.l + factor2.l; i++) {
        if (result.d[i] > 9) {
            result.d[i + 1] += result.d[i] / 10;
            result.d[i] %= 10;
        }
    }
    result.l = factor1.l + factor2.l;
    while (result.l > 0 && result.d[result.l - 1] == 0)
        result.l--;
    if (result.l == 0)
        result.l++;
    for (i = result.l - 1; i >= 0; i--)
        printf("%d", result.d[i]);
    printf("\n");
    return 0;
}
