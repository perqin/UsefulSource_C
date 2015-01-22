#include <stdio.h>
#include <math.h>

int prime[1299709];

int isPrime(int k);

int main(void) {
    int n, i, j;
    scanf("%d", &n);
    while (n) {
        if (isPrime(n)) {
            printf("0\n");
        } else {
            i = n - 1;
            while (isPrime(i) == 0)
                i--;
            j = n + 1;
            while (isPrime(j) == 0)
                j++;
            printf("%d\n", j - i);
        }
        scanf("%d", &n);
    }
    return 0;
}

int isPrime(int k) {
    int i, b;
    if (prime[k] == 0) {
        if (k == 1)
            prime[k] = -1;
        else if (k == 2)
            prime[k] = 1;
        else if (k % 2 == 0)
            prime[k] = -1;
        else {
            b = 1;
            for (i = 3; i <= sqrt(k); i += 2)
                if (k % i == 0) {
                    b = 0;
                    break;
                }
            if (b)
                prime[k] = 1;
            else
                prime[k] = -1;
        }
    }
    if (prime[k] == 1)
        return 1;
    else
        return 0;
}