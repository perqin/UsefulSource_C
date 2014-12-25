#include <stdlib.h>
#include "queue.h"

extern struct node *head;
extern struct node *tail;

void push(const char *s) {
    struct node *n = (struct node*)malloc(sizeof(*n));
    char *tmp_s = (char*)malloc(sizeof(*tmp_s) * 21);
    n->name = tmp_s;

    int i = 0;
    while (s[i] != '\0') {
        tmp_s[i] = s[i];
        i++;
    }
    tmp_s[i] = '\0';
    n->next = NULL;
    if (tail != NULL)
        tail->next = n;
    if (head == NULL)
        head = n;
    tail = n;
}

char *pop(void) {
    if (head == NULL && tail == NULL) {
        return NULL;
    } else {
        char *tmp_s = head->name;
        struct node *deleted = head;
        if (head == tail) {
            head = NULL;
            tail = NULL;
        } else {
            head = head->next;
        }
        free(deleted);
        return tmp_s;
    }
}
