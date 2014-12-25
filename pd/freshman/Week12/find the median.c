#include <stdio.h>

typedef struct student_score {
    int c, m, e, s;
} stusco;

int main(void) {
    int n, i, j;
    stusco sc[10001], tmp;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d%d%d", &sc[i].c, &sc[i].m, &sc[i].e);
        sc[i].s = sc[i].c + sc[i].m + sc[i].e;
    }
    for (i = 0; i <= n / 2; i++)
        for (j = i + 1; j < n; j++)
            if (sc[i].s > sc[j].s
            ||(sc[i].s == sc[j].s && sc[i].c > sc[j].c)
            ||(sc[i].s == sc[j].s && sc[i].c == sc[j].c && sc[i].m > sc[j].m)) {
                tmp = sc[i];
                sc[i] = sc[j];
                sc[j] = tmp;
            }
    printf("%d %d %d\n", sc[n / 2].c, sc[n / 2].m, sc[n / 2].e);
    return 0;
}
