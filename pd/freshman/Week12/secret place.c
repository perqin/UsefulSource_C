#include <stdio.h>

union sec {
    float f[2];
    unsigned long long d;
} u;

int main(void) {
    scanf("%f%f", &u.f[0], &u.f[1]);
    printf("%llu\n", u.d);
    scanf("%llu", &u.d);
    printf("%f %f\n", u.f[0], u.f[1]);
    return 0;
}
