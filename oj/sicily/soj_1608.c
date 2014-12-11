#include <stdio.h>

int flag[10001], ord[10001], digit[10], ans[20][10];

int main(void)
{
	int max = 0, i, j, t, n;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d", &n);
		flag[n] = 1;
		if (n > max)
			max = n;
		ord[n] = i;
	}
	for (i = 1; i <= max; i++)
	{
		/* add digits */
		if (i > 0)
			digit[i % 10]++;
		if (i > 9)
			digit[i % 100 / 10]++;
		if (i > 99)
			digit[i % 1000 / 100]++;
		if (i > 999)
			digit[i % 10000 / 1000]++;
		if (i > 9999)
			digit[1]++;
		/* end */
		if (flag[i] == 1)
			for (j = 0; j < 10; j++)
				ans[ord[i]][j] = digit[j];
	}
	for (i = 0; i < t; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%d ", ans[i][j]);
		printf("%d\n", ans[i][9]);
	}
}