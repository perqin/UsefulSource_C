#include <stdio.h>

int road[10001];

int main(void) {
    int l, m, s, e, i;
    scanf("%d%d", &l, &m);
    while (m > 0) {
        scanf("%d%d", &s, &e);
        for (i = s; i <= e; i++)
            road[i] = 1;
        m--;
    }
    int tree_left = 0;
    for (i = 0; i <= l; i++)
        if (road[i] == 0)
            tree_left++;
    printf("%d\n", tree_left);
    return 0;
}
