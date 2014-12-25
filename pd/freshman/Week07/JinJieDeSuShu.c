#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main(void) {
    int n, prime[32767];
    scanf("%d", &n);
    int count = -1, i = 2;
    while (count + 1 < n) {
        if (isPrime(i) == 1) {
            count++;
            prime[count] = i;
        }
        if (i > 9 && i % 10 == 3)
            i += 4;
        else if (i != 2)
            i += 2;
        else
            i++;
    }
    for (i = 0; i < n - 1; i++)
        printf("%d ", prime[i]);
    printf("%d\n", prime[n - 1]);

    return 0;
}

int isPrime(int n) {
    int i;
    for (i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
