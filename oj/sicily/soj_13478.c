#include <stdio.h>

int main(void) {
    int dec[3] = {0, 0, 1}, sum, n;
    scanf("%d", &n);
    while (1) {
        if (dec[0] + dec[1] * 10 + dec[2] * 100 >= n)
            break;
        sum = dec[0] * dec[0] * dec[0];
        sum += dec[1] * dec[1] * dec[1];
        sum += dec[2] * dec[2] * dec[2];
        if (sum == dec[0] + dec[1] * 10 + dec[2] * 100)
            printf("%d\n", sum);
        dec[0]++;
        if (dec[0] > 9) {
            dec[0] = 0;
            dec[1]++;
        }
        if (dec[1] > 9) {
            dec[1] = 0;
            dec[2]++;
        }
        if (dec[2] > 9)
            dec[2] = 0;
    }
    return 0;
}