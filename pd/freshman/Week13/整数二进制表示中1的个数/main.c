#include <stdio.h>

int get1InBin(int n);

int main(void) {
    int n, m;
    scanf("%d", &n);
    while (n) {
        scanf("%d", &m);
        printf("%d\n", get1InBin(m));
        n--;
    }
}

int get1InBin(int n) {
    int k = n, s = 0;
    while (k) {
        s += k % 2;
        k /= 2;
    }
    return s;
}
