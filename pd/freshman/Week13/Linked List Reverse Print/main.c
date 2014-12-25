#include <stdio.h>
#include <stdlib.h>
#include "function.h"
 
int main() {
    const int length = 5;
    int index, value;
    struct node* beginner = (struct node*)malloc(sizeof(struct node));
 
    scanf("%d", &beginner->val);
    beginner->next = NULL;
    struct node* ender = beginner;
 
    for (index = 1; index < length; ++index) {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
 
        scanf("%d", &value);
        temp->val = value;
        temp->next = NULL;
        ender->next = temp;
        ender = temp;
    }
 
    // function defined by you is called here.
    print_reverse(beginner);
    struct node* to_be_deleted = beginner;
 
    while (to_be_deleted != NULL) {
        beginner = beginner->next;
        free(to_be_deleted);
        to_be_deleted = beginner;
    }
    return 0;
}