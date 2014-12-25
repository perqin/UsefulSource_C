#include <stdlib.h>
#include <stdio.h>
#include "solution.h"

struct ListNode *deleteDuplicates(struct ListNode *head) {
    struct ListNode *new_head = head;
    struct ListNode *deleted;
    while (head->next != NULL)
        if (head->next->val == head->val) {
            deleted = head->next;
            head->next = head->next->next;
            free(deleted);
        } else {
            head = head->next;
        }
    return new_head;
}
