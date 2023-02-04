#include "Header.h"

double det(double a[2][2]) {
    return a[0][0] * a[1][1] - a[0][1] * a[1][0];
}

void determine_x_y(double a[2][2], double b[2], double& x, double& y) {
     double d = det(a);
    double a1[2][2] = { {b[0], a[0][1]}, {b[1], a[1][1]} };
    double a2[2][2] = { {a[0][0], b[0]}, {a[1][0], b[1]} };
    x = det(a1) / d;
    y = det(a2) / d;
}