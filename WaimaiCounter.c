#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i, peopleCount, useName = 1;
    double totalPay = 0, discount, payOrigin[100], payDiscount[100];
    char peopleName[100][100];
    printf("How many people?\n");
    scanf("%d", &peopleCount);
    printf("Input each\'s name separated by Space or Enter.\n");
    printf("Input 0 to use number instead of name.\n");
    for (i = 0; i < peopleCount; i++)
    {
        scanf("%s", peopleName[i]);
        if (i == 0 && peopleName[i][0] == '0' && strlen(peopleName[i]) == 1)
        {
            useName = 0;
            break;
        }
    }
    for (i = 0; i < peopleCount; i++)
    {
        printf("Input the origin money that ");
        if (useName)
            printf("%s", peopleName[i]);
        else
            printf("people(%d)", i + 1);
        printf(" should pay.\n");
        scanf("%lf", &payOrigin[i]);
        totalPay += payOrigin[i];
    }
    printf("Input the total discount.\n");
    scanf("%lf", &discount);
    for (i = 0; i < peopleCount; i++)
        payDiscount[i] = payOrigin[i] - (payOrigin[i] / totalPay) * discount;
    for (i = 0; i < peopleCount; i++)
    {
        if (useName)
            printf("%s\n", peopleName[i]);
        else
            printf("People(%d)\n", i + 1);
        printf(" should pay %.2lf\n", payDiscount[i]);
    }
    system("PAUSE");
    return 0;   
}