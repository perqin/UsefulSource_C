#include <stdlib.h>

int * doubleCapacity(int *list, int size, int addSize) {
    int *new_list = (int*)malloc(sizeof(*new_list) * (size + addSize)), i;
    for (i = 0; i < size; i++)
        new_list[i] = list[i];
    for (i = size; i < (size + addSize); i++)
        new_list[i] = 0;
    return new_list;
}
