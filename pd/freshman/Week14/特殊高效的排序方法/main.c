#include<stdio.h>
#define SIZEBIT 10000000
#define SIZE SIZEBIT/32 + 1
 
void set(unsigned int* bitmap, unsigned int index);
 
int get(unsigned int* bitmap, unsigned int index);
 
void cleanAll(unsigned int* bitmap) {
        int i;
        for (i = 0; i < SIZE; i++)
                bitmap[i] = 0;
}
 
int main() {
        unsigned int bitmap[SIZE];
        cleanAll(bitmap);
        int arraySize;
        scanf("%d", &arraySize);
 
        int j = 0;
        unsigned int temp;
        for (j = 0; j < arraySize; j++) {
                scanf("%d", &temp);
                set(bitmap, temp);  //  ����bitλ��Ϊ1�ĺ�����Ҫ��ʵ��
        }
 
        for (j = 0; j < SIZEBIT; j++) {
                if (get(bitmap, j))  //  ��ȡ���bitλ��ֵ�ĺ�����Ҫ��ʵ��
                        printf("%d ", j);
        }
        return 0;
}