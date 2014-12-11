#include <stdio.h>

int main(void)
{
	int dec[4], hex[4], duo[4];
	dec[0] = 0;
	dec[1] = 0;
	dec[2] = 0;
	dec[3] = 1;
	hex[0] = 8;
	hex[1] = 14;
	hex[2] = 3;
	hex[3] = 0;
	duo[0] = 4;
	duo[1] = 11;
	duo[2] = 6;
	duo[3] = 0;
	int sum_dec, sum_hex, sum_duo;
	do
	{
		//judge
		sum_dec = dec[0] + dec[1] + dec[2] + dec[3];
		sum_hex = hex[0] + hex[1] + hex[2] + hex[3];
		sum_duo = duo[0] + duo[1] + duo[2] + duo[3];
		if ((sum_duo == sum_hex) && (sum_hex == sum_dec))
			printf("%d%d%d%d\n", dec[3], dec[2], dec[1], dec[0]);
		//+1 for dec
		dec[0]++;
		if (dec[0] == 10)
		{
			dec[0] = 0;
			dec[1]++;
		}
		if (dec[1] == 10)
		{
			dec[1] = 0;
			dec[2]++;
		}
		if (dec[2] == 10)
		{
			dec[2] = 0;
			dec[3]++;
		}
		//+1 for hex
		hex[0]++;
		if (hex[0] == 16)
		{
			hex[0] = 0;
			hex[1]++;
		}
		if (hex[1] == 16)
		{
			hex[1] = 0;
			hex[2]++;
		}
		if (hex[2] == 16)
		{
			hex[2] = 0;
			hex[3]++;
		}
		//+1 for duo
		duo[0]++;
		if (duo[0] == 12)
		{
			duo[0] = 0;
			duo[1]++;
		}
		if (duo[1] == 12)
		{
			duo[1] = 0;
			duo[2]++;
		}
		if (duo[2] == 12)
		{
			duo[2] = 0;
			duo[3]++;
		}
	} while (dec[0] + dec[1] * 10 + dec[2] * 100 + dec[3] * 1000 < 10000);

	return 0;
}