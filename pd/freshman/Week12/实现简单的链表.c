#include <stdio.h>
#include <stdlib.h>

typedef struct chain {
    int n;
    char l;
    struct chain *nex;
} stu;

int main(void) {
    int num,  m, i, number;
    char level;
    stu *hea, *cur, *p;
    scanf("%d%d", &num, &m);
    scanf("%d %c", &number, &level);
    hea = (stu *)malloc(sizeof(*hea));
    hea->n = number;
    hea->l = level;
    if (num == 1) {
        printf("%c\n", level);
        free(hea);
        return 0;
    }
    p = hea;
    for (i = 1; i < num; i++) {
        scanf("%d %c", &number, &level);
        cur = (stu *)malloc(sizeof(*cur));
        cur->n = number;
        cur->l = level;
        p->nex = cur;
        p = cur;
    }
    p->nex = hea;
    while (p->nex->n != m)
        p = p->nex;
    printf("%c\n", p->l);
    cur->nex = NULL;
    while (hea->nex != NULL) {
        cur = hea;
        hea = hea->nex;
        free(cur);
    }
    free(hea);
    return 0;
}
