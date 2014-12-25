#include <math.h>
#include "geometric.h"

int judge(const struct circle cir, const struct line lin) {
    double fz = lin.a * cir.x + lin.b * cir.y + lin.c;
    if (fz < 0)
        fz = -fz;
    double dist = fz / sqrt(pow(lin.a, 2) + pow(lin.b, 2));
    if (dist < cir.r)
        return 1;
    else if (dist > cir.r)
        return -1;
    else
        return 0;
}
