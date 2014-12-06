#include <stdio.h>
#include <string.h>
#include <math.h>

double solve(char *e);
int isOperator(char o);
int opeLevel(char o1, char o2);
double stringToDouble(char *s);
double calculate(double a, double b, char o);

int main(void)
{
    char *ex;
    scanf("%s", ex);
    printf("%lf\n", solve(ex));
}

double solve(char *e)
{
    int inBracket = 0;
    char *head = e, *tail = e + strlen(e) - 1, *low = NULL, ope;
    double num = 0;
    while (*head == '(' && *tail == ')')
    {
        *head = '\0';
        *tail = '\0';
        head++;
        tail--;
    }
    while (tail != head)
    {
        if (*tail == ')')
            inBracket++;
        if (*tail == '(')
            inBracket--;
        if (inBracket == 0 && isOperator(*tail) && (low == NULL || opeLevel(*low, *tail) > 0))
            low = tail;
        tail--;
    }
    if (low == NULL)
        return stringToDouble(head);
    else
    {
        ope = *low;
        *low = '\0';
        printf("%s [ %c ] %s\n", head, ope, low + 1);
        return calculate(solve(head), solve(++low), ope);
    }
}

int isOperator(char o)
{
    if (o == '+' || o == '-' || o == '*' || o == '/' || o == '^')
        return 1;
    else
        return 0;
}

int opeLevel(char o1, char o2)
{
    int l1;
    switch (o1)
    {
        case '+': l1 = 0; break;
        case '-': l1 = 0; break;
        case '*': l1 = 1; break;
        case '/': l1 = 1; break;
        case '^': l1 = 2; break;
        default: break;
    }
    switch (o2)
    {
        case '+': return l1;
        case '-': return l1;
        case '*': return l1 - 1;
        case '/': return l1 - 1;
        case '^': return l1 - 2;
        default: break;
    }
}

double stringToDouble(char *s)
{
    int flo = 0, flo_count = 0;
    double n = 0;
    while (*s != '\0')
    {
        if (flo)
            flo_count++;
        if (*s == '.')
            flo = 1;
        else
            n = n * 10 + *s - '0';
        s++;
    }
    while (flo_count--)
        n = n / 10;
    return n;
}

double calculate(double a, double b, char o)
{
    switch (o)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a, b);
        default: return 0;
    }
}
