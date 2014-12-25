#include <stdio.h>
#include <stdlib.h>

struct card_struct {
    int ind;
    struct card_struct *nex;
};
typedef struct card_struct card;

int main(void) {
    int t, n, i;
    card *cur, *head;
    scanf("%d", &t);
    while (t) {
        scanf("%d", &n);
        if (n == 1) {
            printf("1 \n");
            t--;
            continue;
        }
        head = NULL;
        for (i = n; i >= 1; i--) {
            cur = (card *)malloc(sizeof(*cur));
            cur->nex = head;
            cur->ind = i;
            head = cur;
        }
        while (cur->nex != NULL)
            cur = cur->nex;
        cur->nex = head;
        for (i = 1; i <= n - 2; i++) {
            printf("%d ", head->ind);
            cur->nex = head->nex;
            free(head);
            cur = cur->nex;
            head = cur->nex;
        }
        printf("%d ", head->ind);
        free(head);
        printf("%d \n", cur->ind);
        free(cur);
        t--;
    }
    return 0;
}
