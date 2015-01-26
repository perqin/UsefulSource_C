#include <stdio.h>

int cir[2][1000];

int main(void) {
    int n, i, c, gam_rou, ok;
    scanf("%d", &n);
    while (n) {
        for (i = 0; i < n; ++i)
            scanf("%d", &cir[0][i]);
        c = 0;
        gam_rou = 0;
        while (1) {
            ok = 1;
            for (i = 0; i < n; ++i)
                if (cir[c][i] % 2 || cir[c][i] != cir[c][(i + 1) % n]) {
                    ok = 0;
                    break;
                }
            if (ok)
                break;
            for (i = 0; i < n; ++i)
                cir[1 - c][i] = cir[c][i] / 2;
            for (i = 0; i < n; ++i) {
                cir[1 - c][(i + 1) % n] += cir[c][i] / 2;
                if (cir[1 - c][(i + 1) % n] % 2)
                    cir[1 - c][(i + 1) % n]++;
            }
            gam_rou++;
            c = 1 - c;
        }
        printf("%d %d\n", gam_rou, cir[c][0]);
        scanf("%d", &n);
    }
    return 0;
}