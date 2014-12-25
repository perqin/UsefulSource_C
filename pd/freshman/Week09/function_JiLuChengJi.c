#include <stdio.h>
#include <stdlib.h>

void output(double **score, int nStuNum, double *avg) {
    int i;
    for (i = 0; i < nStuNum; ++i)
        printf("%d %.2lf\n", i + 1, avg[i]);
    free(avg);
    for (i = 0; i < nStuNum; ++i)
        free(score[i]);
    free(score);
}

void average(double** score, int nStuNum, int nCourseNum, double* avg) {
    int i, j;
    double total;
    for (i = 0; i < nStuNum; i++) {
        total = 0;
        for (j = 0; j < nCourseNum; j++)
            total += score[i][j];
        avg[i] = total / nCourseNum;
    }
}
