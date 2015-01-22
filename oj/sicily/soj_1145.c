#include <stdio.h>

int road[10001];

int main(void) {
    int l, m, i, j, total = 0, lef, rig;
    scanf("%d%d", &l, &m);
    for (i = 0; i < m; ++i) {
        scanf("%d%d", &lef, &rig);
        for (j = lef; j <= rig; ++j)
            road[j] = 1;
    }
    for (i = 0; i <= l; ++i)
        total += road[i];
    printf("%d\n", l + 1 - total);
    return 0;
}