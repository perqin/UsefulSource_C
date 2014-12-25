#include <stdio.h>

int main(void) {
    int total, ans[5], val[5];
    val[0] = 50;
    val[1] = 10;
    val[2] = 5;
    val[3] = 2;
    val[4] = 1;
    scanf("%d", &total);
    int i;
    for (i = 0; i < 5; ++i) {
        if (total >= val[i]) {
            ans[i] = total / val[i];
            total = total % val[i];
        } else {
            ans[i] = 0;
        }
    }
    printf("wu jiao: %d\n", ans[0]);
    printf("yi jiao: %d\n", ans[1]);
    printf("wu fen: %d\n", ans[2]);
    printf("liang fen: %d\n", ans[3]);
    printf("yi fen: %d\n", ans[4]);
    return 0;
}
