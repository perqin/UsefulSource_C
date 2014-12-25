#include <stdio.h>

struct student_info {
    char nam[20]; /* name */
    int fs;       /* final score */
    int ce;       /* class evaluation */
    char sc;      /* student cadres */
    char wp;      /* from western province */
    int ta;       /* thesis amount */
    int ts;       /* total schlorship */
} si[100];        /* student information */

int main(void) {
    int p = 0, schlor_sum = 0, n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d", si[i].nam, &si[i].fs);
        scanf("%d %c %c %d", &si[i].ce, &si[i].sc, &si[i].wp, &si[i].ta);
        si[i].ts = 0;
        if (si[i].fs > 80 && si[i].ta > 0)
            si[i].ts += 8000;
        if (si[i].fs > 85 && si[i].ce > 80)
            si[i].ts += 4000;
        if (si[i].fs > 90)
            si[i].ts += 2000;
        if (si[i].fs > 85 && si[i].wp == 'Y')
            si[i].ts += 1000;
        if (si[i].ce > 80 && si[i].sc == 'Y')
            si[i].ts += 850;
        if (si[i].ts > si[p].ts)
            p = i;
        schlor_sum += si[i].ts;
    }
    printf("%s\n%d\n%d\n", si[p].nam, si[p].ts, schlor_sum);
    return 0;
}
