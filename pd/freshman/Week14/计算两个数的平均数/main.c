#include<stdio.h>
 
int AverageWithoutArithmetic(int x, int y);
 
int main() {
        int a, b, num;
        scanf("%d", &num);
 
        while (num--) {
                scanf("%d %d", &a, &b);
                printf("%d\n", AverageWithoutArithmetic(a, b));
        }
        return 0;
}
