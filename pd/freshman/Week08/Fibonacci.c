#include <stdio.h>

int seq[41];

int fib(int num);

int main(void) {
    int n;
    while (scanf("%d", &n) != EOF)
        printf("%d\n", fib(n));
    return 0;
}

int fib(int num) {
    if (num == 0 || num == 1)
        seq[num] = num;
    else if (seq[num] == 0)
        seq[num] = fib(num - 1) + fib(num - 2);
    return seq[num];
}
