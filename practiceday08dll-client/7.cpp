#include "Header.h"

#include <assert.h>
int main() {
    double x = 3.0, y = 4.0;
    double r = 0.0, theta = 0.0;
    cartesian_to_polar(x, y, r, theta);
    assert(r == 5 && static_cast<int>(theta * 10000) == 531570);
}
