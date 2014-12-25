#include <stdio.h>

int main(void) {
    int n1, n2;
    scanf("%x%x", &n1, &n2);
    if ((n1 > n2 ? n1 - n2 : n2 - n1) > 400)
        printf("The bug won't like them.\n");
    else
        printf("%lld\n", (n1 > n2 ? n1 - n2 : n2 - n1) / 4);
    return 0;
}
