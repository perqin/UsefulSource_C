#include <stdio.h>
#include "function.h"

void print_reverse(struct node *p) {
    if (p->next != NULL)
        print_reverse(p->next);
    printf("%d\n", p->val);
}
