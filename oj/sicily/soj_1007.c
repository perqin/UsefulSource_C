#include <stdio.h>

int main(void)
{
	int width, l, c, r;
    char tmp;
    char box[101][21];

	while (1)
	{
		scanf("%d", &width);
        getchar();
        if (width == 0)
            break;
		l = 0;
		do
		{
			tmp = getchar();
			box[l / width][((l / width) % 2 == 0) ? (l % width) : (width - 1 - l % width)] = tmp;
			l++;
		} while (tmp != 10);
        for (c = 0; c < width; c++)
            for (r = 0; r < l / width; r++)
                printf("%c", box[r][c]);
        printf("\n");
	}

    return 0;
}