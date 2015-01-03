#include <stdio.h>

void quickSort(int l, int r);

int num[200000];

int main(void)
{
    int pre, pre_count, i, n, first_line = 1;
    while (scanf("%d", &n) != EOF)
    {
        if (first_line)
            first_line = 0;
        else
            printf("\n");
        for (i = 0; i < n; i++)
            scanf("%d", &num[i]);
        quickSort(0, n - 1);
        pre = num[0];
        pre_count = 1;
        for (i = 1; i < n; i++)
        {
            if (num[i] == pre)
                pre_count++;
            else
            {
                printf("%d %d\n", pre, pre_count);
                pre = num[i];
                pre_count = 1;
            }
        }
        printf("%d %d\n", pre, pre_count);
    }
    return 0;
}

void quickSort(int l, int r)
{
    int i = l, j = r, k = num[(i + j) / 2], tmp;
    do
    {
        while (num[i] < k)
            i++;
        while (num[j] > k)
            j--;
        if (i <= j)
        {
            tmp = num[i];
            num[i] = num[j];
            num[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);
    if (l <= j)
        quickSort(l, j);
    if (i <= r)
        quickSort(i, r);
}
