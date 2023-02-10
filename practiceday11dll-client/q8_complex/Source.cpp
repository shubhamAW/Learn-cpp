#include<assert.h>

#include "Complex.h"

int main() {
    Complex u(1, 1), v(6, -5);
    Complex w;

    // Following test case checks
    // - Add member function.
    w = u.Add(v);
    assert(w.GetR() == 7 && w.GetI() == -4);

    // Following test case checks
    // - Sub member function.
    w = u.Sub(v);
    assert(w.GetR() == -5 && w.GetI() == 6);

    // Following test case checks
    // - Mul member function.
    w = u.Mul(v);
    assert(w.GetR() == 11 && w.GetI() == 1);

    // Following test case checks
    // - Div member function.
    u = Complex(4, 4);
    v = Complex(2, -2);
    w = u.Div(v);
    assert(w.GetR() == 0 && w.GetI() == 2);
}
