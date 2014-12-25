#include <stdio.h>
#include <string.h>

int main(void) {
    char *type_list[4] = {"kg", "lb", "l", "g"};
    char *conv_list[4] = {"lb", "kg", "g", "l"};
    double equ_list[4] = {2.2046, 0.4536, 0.2642, 3.7854};
    int n, i, j;
    double num;
    char typ[3];
    scanf("%d", &n);
    for (j = 1; j <= n; j++) {
        scanf("%lf %s", &num, typ);
        for (i = 0; i < 4; i++)
            if (strcmp(typ, type_list[i]) == 0) {
                printf("%d %.4lf %s\n", j, num * equ_list[i], conv_list[i]);
                break;
            }
    }

    return 0;
}
