#include <stdio.h>

int num[1000];

void quickSort(int l, int r);

int main(void)
{
	int t, i, n;
	scanf("%d", &t);
	while (t > 0)
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", &num[i]);
		quickSort(0, n - 1);
		for (i = 0; i < n; i++)
			printf("%d\n", num[i]);
		t--;
	}
	return 0;
}

void quickSort(int l, int r)
{
	int tmp, i = l, j = r, k = num[(i + j) / 2];
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
	if (l < j)
		quickSort(l, j);
	if (i < r)
		quickSort(i, r);
}