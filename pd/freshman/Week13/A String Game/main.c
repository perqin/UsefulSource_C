#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAXLEN 100
#define POS_P 0  // lose
#define POS_N 1  // win

// for debug
#define LOG_D(x) printf("===LOG===\n%d\n", x)

typedef struct struct_move {
    int d, l, r;
} move;

int getPos(int mo, int ma);

int graph[32][32], movesCount;

int main(void) {
    int n, m, i, j, k, matched, maskCode;
    char dict[100][MAXLEN], s[MAXLEN];
    move moves[32];
    int pos;
    scanf("%d", &n);
    while (n) {
        // scan input
        getchar();
        i = 0;
        do {
            s[i++] = getchar();
        } while (s[i - 1] != 10);
        s[i - 1] = '\0';
        scanf("%d", &m);
        for (i = 0; i < m; i++)
            scanf("%s", dict[i]);

        // init set of valid move
        movesCount = 0;
        for (i = 0; i < strlen(s); i++)
            for (j = 0; j < m; j++) {
                matched = 1;
                for (k = 0; k < strlen(dict[j]); k++)
                    if (s[i + k] != dict[j][k]) {
                        matched = 0;
                        break;
                    }
                if (matched) {
                    moves[movesCount].d = j;
                    moves[movesCount].l = i;
                    moves[movesCount].r = i + strlen(dict[j]) - 1;
                    movesCount++;
                }
            }

        // init the relationship between moves
        for (i = 0; i < movesCount; i++)
            for (j = 0; j < movesCount; j++) {
                if (moves[i].r < moves[j].l || moves[i].l > moves[j].r) {
                    graph[i][j] = 0;
                    graph[j][i] = 0;
                } else {
                    graph[i][j] = 1;
                    graph[j][i] = 1;
                }
            }

        // DP
        maskCode = pow(2, movesCount) - 1;
        pos = getPos(movesCount, maskCode);
        if (pos)
            printf("Teddy\n");
        else
            printf("Tracy\n");

        n--;
    }
    return 0;
}

int getPos(int mo, int ma) {
    int i, j, p, m1, m2;
    if (mo == 0)
        return POS_P;
    // traverse all pos
    for (i = 0; i < movesCount; i++) {
        // get mask of index i
        m1 = (ma >> i) & 1;
        if (m1 == 1) {
            // in this case moves[i] is valid, so calculate next ma
            // m2 is the new mask with moves[i] moved
            m2 = ma ^ (1 << i);
            // other moves will be invalid due to moves[i]
            for (j = 0; j < movesCount; j++) {
                if (graph[i][j] && ((m2 >> j) & 1 == 1)) {
                    // moves[j] becomes invalid
                    m2 = m2 ^ (1 << j);
                }
            }
            p = getPos(mo - 1, m2);
            if (p == POS_P)
                return POS_N;
        }
    }
    return POS_P;
}
