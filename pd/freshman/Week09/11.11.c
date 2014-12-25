#include <stdio.h>

int num[10000];

void quickSort(int l, int r);

int main(void) {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    quickSort(0, n - 1);
    for (i = 0; i < n; i++)
        printf(i == n - 1 ? "%d\n" : "%d ", num[n - i - 1]);

    return 0;
}

void quickSort(int l, int r) {
    int i = l, j = r, k = num[(i + j) / 2], tmp;
    do {
        while (num[i] < k)
            i++;
        while (num[j] > k)
            j--;
        if (i <= j) {
            tmp = num[i];
            num[i] = num[j];
            num[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);
    if (l < j)
        quickSort(l, j);
    if (i < r)
        quickSort(i, r);
}
