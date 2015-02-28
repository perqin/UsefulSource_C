#include <stdio.h>

typedef struct struct_coor {
    int x, y;
} coor;

int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

int main(void) {
    int n, i, ni, di, min_x, min_y, max_x, max_y;
    coor co[200];
    scanf("%d", &n);
    co[0].x = 0;
    co[0].y = 0;
    while (n) {
        min_x = co[0].x;
        min_y = co[0].y;
        max_x = co[0].x;
        max_y = co[0].y;
        for (i = 1; i < n; ++i) {
            scanf("%d%d", &ni, &di);
            co[i].x = co[ni].x + dx[di];
            co[i].y = co[ni].y + dy[di];
            if (co[i].x > max_x)
                max_x = co[i].x;
            if (co[i].x < min_x)
                min_x = co[i].x;
            if (co[i].y > max_y)
                max_y = co[i].y;
            if (co[i].y < min_y)
                min_y = co[i].y;
        }
        printf("%d %d\n", max_x - min_x + 1, max_y - min_y + 1);
        scanf("%d", &n);
    }
    return 0;
}