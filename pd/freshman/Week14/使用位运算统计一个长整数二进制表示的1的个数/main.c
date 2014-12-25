#include <stdio.h>

int main(void) {
    int n, m, t;
    scanf("%d", &n);
    while (n) {
        t = 0;
        scanf("%d", &m);
        if (m < 0) {
            m = m ^ (1 << 31);
            t = 1;
        }
        while (m) {
            t += m & 1;
            m >>= 1;
        }
        printf("%d\n", t);
        n--;
    }
    return 0;
}
