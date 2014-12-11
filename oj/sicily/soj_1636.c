#include <stdio.h>

int main(void)
{
	int t, m, n, ai, bi;
	scanf("%d", &t);
	while (t > 0)
	{
		scanf("%d%d", &m, &n);
		while (n > 0)
		{
			scanf("%d%d", &ai, &bi);
			m -= ai * bi;
			n--;
		}
		if (m < 0)
			printf("Not enough\n");
		else
			printf("%d\n", m);
		t--;
	}
}