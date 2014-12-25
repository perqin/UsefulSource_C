#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "queue.h"
 
struct node *head = NULL, *tail = NULL;
 
int main() {
    char operation[5], name[21], *answer;
    printf("QBQBQ~\n");
    while (scanf("%s", operation) != EOF)
        if (strcmp(operation, "push") == 0) {
            scanf("%s", name);
            push(name);
        } else {
            answer = pop();
            if (answer == NULL) {
                printf("Queue_empty!\n");
            } else {
                printf("%s\n", answer);
                free(answer);
            }
        }
    return 0;
}
