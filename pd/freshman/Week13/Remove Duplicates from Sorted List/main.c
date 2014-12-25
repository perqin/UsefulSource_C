#include <stdio.h>
#include <stdlib.h>
#include "solution.h"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode*next;
 * };
 */
int main() {
    int length;
    scanf("%d", &length);
 
    struct ListNode *head = NULL;
    struct ListNode *end = NULL;
 
    int count, value;
    for (count= 1; count <= length; ++count) {
        scanf("%d", &value);
 
        struct ListNode *node = (struct ListNode*)\
            malloc(sizeof(struct ListNode));
        node->val = value;
        node->next = NULL;
 
        if (head == NULL)
            head = node;
 
        if (end == NULL) {
            end = head;
        } else {
            end->next = node;
            end = node;
        }
    }
    struct ListNode *new_head = deleteDuplicates(head);
    struct ListNode *index = new_head;
    while (index != NULL) {
        printf("%d\n", index->val);
        index = index->next;
    }
 
    struct ListNode* to_be_freed = new_head;
    while (to_be_freed != NULL) {
        new_head = new_head->next;
        free(to_be_freed);
        to_be_freed = new_head;
    }
    return 0;
 
}
