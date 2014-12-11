#include <stdio.h>

int main(void)
{
	int i, t, h[10], total = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &h[i]);
	scanf("%d", &t);
	for (i = 0; i < 10; i++)
		if (t + 30 >= h[i])
			total++;
	printf("%d\n", total);

	return 0;
}