#include <stdio.h>

struct struct_number {
    int l, d[20];
};
typedef struct struct_number radix_number;

void setRadixNumber(int n);
int judgePal(void);
void incRadixNumber(void);

radix_number radixNumber[11];

int main(void) {
    int t, s;
    scanf("%d", &t);
    while (t) {
        scanf("%d", &s);
        s++;
        setRadixNumber(s);
        while (judgePal() == 0) {
            s++;
            incRadixNumber();
        }
        printf("%d\n", s);
        t--;
    }
    return 0;
}

void setRadixNumber(int n) {
    int r, k;
    for (r = 2; r <= 10; r++) {
        radixNumber[r].l = 0;
        k = n;
        while (k) {
            radixNumber[r].d[radixNumber[r].l] = k % r;
            radixNumber[r].l++;
            k /= r;
        }
    }
}

int judgePal(void) {
    int count = 0, r, pal, i, tmp1, tmp2;
    for (r = 10; r >= 2; r--) {
        pal = 1;
        for (i = 0; i < radixNumber[r].l / 2; i++) {
            tmp1 = radixNumber[r].d[i];
            tmp2 = radixNumber[r].d[radixNumber[r].l - i - 1];
            if (tmp1 != tmp2) {
                pal = 0;
                break;
            }
        }
        if (pal)
            count++;
        if (count > 1)
            return 1;
    }
    return 0;
}

void incRadixNumber(void) {
    int r, i;
    for (r = 2; r <= 10; r++) {
        radixNumber[r].d[0]++;
        i = 0;
        while (radixNumber[r].d[i] == r) {
            if (i == radixNumber[r].l - 1) {
                radixNumber[r].d[i + 1] = 1;
                radixNumber[r].l++;
            } else {
                radixNumber[r].d[i + 1]++;
            }
            radixNumber[r].d[i] = 0;
            i++;
        }
    }
}
