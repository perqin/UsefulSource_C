#include<stdio.h>
 
void printBinary(unsigned int n);
 
int main() {
        int num;
        scanf("%d", &num);
        while (num--) {
                int n;
                scanf("%d", &n);
                printBinary(n);  //  需要您实现的输出函数
        }
        return 0;
}
