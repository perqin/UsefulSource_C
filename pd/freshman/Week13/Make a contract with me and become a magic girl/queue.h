#ifndef __QUEUE_H__
#define __QUEUE_H__
 
struct node {
    char * name;
    struct node * next;
};
 
void push(const char *);
 
char * pop();
 
#endif
