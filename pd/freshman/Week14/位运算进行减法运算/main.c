#include<stdio.h>
 
int SubWithoutArithmetic(int num1, int num2);
 
int main() {
        int a, b, num;
        scanf("%d", &num);
 
        while (num--) {
                scanf("%d %d", &a, &b);
                printf("%d\n", SubWithoutArithmetic(a, b));
        }
        return 0;
}
