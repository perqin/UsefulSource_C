#include <stdio.h>
#include <math.h>

int main(void) {
    int p = 32, i;
    unsigned dec = 0;
    char bin[32];
    scanf("%s", &bin);
    for (i = 0; i < 32; i++)
        if (bin[i] != '1' && bin[i] != '0') {
            p = i;
            break;
        }
    for (i = 0; i < p; i++)
        if (bin[i] == '1')
            /*dec += (1 << (p - 1 - i));*/
            dec += pow(2, p - 1 - i);
    printf("%u\n", dec);

    return 0;
}
