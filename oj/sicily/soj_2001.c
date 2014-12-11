#include <stdio.h>

int main(void)
{
    scanf("%d%d", &n[0], &n[1]);
    for (j = 0; j < 2; j++)
    {
        for (i = 1; i <= sqrt(n[j]); i++)
            if (n[j] % i == 0)
            {
                factor[j][factorCount[j]][0] = i;
                factor[j][factorCount[j]][1] = n[j] / i;
                factorCount[j]++;
            }
    }
    for
    return 0;
}