#include <stdio.h>

int stack[200001], h, cp[200001];

void clear(void);
void push(int x);
void pop(void);
int head(void);

int main(void)
{
    int n, i, a, b;
    scanf("%d", &n);
    while (n)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d%d", &a, &b);
            cp[a] = b;
            cp[b] = a;
        }
        clear();
        push(1);
        for (i = 2; i <= 2 * n; i++)
        {
            if (cp[i] == head())
                pop();
            else
                push(i);
        }
        if (head())
            printf("No\n");
        else
            printf("Yes\n");
        scanf("%d", &n);
    }

    return 0;
}

void clear(void)
{
    h = 0;
}

void push(int x)
{
    h++;
    stack[h] = x;
}

void pop(void)
{
    h--;
}

int head(void)
{
    return stack[h];
}