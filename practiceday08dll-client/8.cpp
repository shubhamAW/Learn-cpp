#include <assert.h>
#include "Header.h"

int main() {
    double m = 7.26, r = 2, omega = 2;
    double f = 0.0, v = 0.0;
    ucm(m, r, omega, f, v);
    assert(f == 58.08 && v == 4);
}
