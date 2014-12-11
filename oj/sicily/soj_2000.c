#include <stdio.h>

int main(void)
{
    int n, i, j, sum = 0, joy[25000], price[25000], i_max[3];
    double max = 0, hfm[25000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &joy[i], &price[i]);
        hfm[i] = (double)joy[i] / price[i];
        if (hfm[i] > max)
        {
            max = hfm[i];
            i_max[0] = i;
        }
    }
    sum += price[i_max[0]];
    hfm[i_max[0]] = 0;
    for (i = 1; i <= 2; i++)
    {
        max = 0;
        for (j = 0; j < n; j++)
            if (hfm[j] > max)
            {
                max = hfm[j];
                i_max[i] = j;
            }
        sum += price[i_max[i]];
        hfm[i_max[i]] = 0;
    }
    printf("%d\n", sum);
    for (i = 0; i < 3; i++)
        printf("%d\n", i_max[i] + 1);
    return 0;
}