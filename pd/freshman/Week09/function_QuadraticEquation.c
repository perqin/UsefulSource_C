#include <math.h>

int getRoots(double a, double b, double c, \
    double *pRootOne, double *pRootTwo) {
    double det = b * b - 4 * a * c;
    if (det < 0) {
        return 0;
    } else {
        *pRootOne = (-b + sqrt(det)) / a / 2;
        *pRootTwo = (-b - sqrt(det)) / a / 2;
    }
}
