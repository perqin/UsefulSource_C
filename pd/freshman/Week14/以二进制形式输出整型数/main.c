#include<stdio.h>
 
void printBinary(unsigned int n);
 
int main() {
        int num;
        scanf("%d", &num);
        while (num--) {
                int n;
                scanf("%d", &n);
                printBinary(n);  //  ��Ҫ��ʵ�ֵ��������
        }
        return 0;
}
