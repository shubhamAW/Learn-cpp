#include <assert.h>

class Complex {
public:
    Complex(int R, int I):m_R(R), m_I(I){}

    Complex():m_R(0),m_I(0){}

public:
    Complex Add(Complex v) {
        return Complex((this->m_R + v.m_R), (this->m_I + v.m_I));
    }
    Complex Sub(Complex v) {
        return Complex((this->m_R - v.m_R), (this->m_I - v.m_I));
    }
    Complex Mul(Complex v) {
        int r = (this->m_R * v.m_R) - (this->m_R * v.m_I);
        int i = (this->m_I * v.m_R) + (this->m_I * v.m_I);
        return Complex(r, i);
    }
    Complex Div(Complex v) {
                //  a * c  + (b * d) /((c * c ) + (d*d));
        int r = ((this->m_R * v.m_R )+ (this->m_I * v.m_I)) / ((v.m_R * v.m_R) + (v.m_I * v.m_I));
        int i = ((this->m_I * v.m_R) - (this->m_R * v.m_I)) / ((v.m_R * v.m_R) + (v.m_I * v.m_I));
        return Complex(r, i);
    }

public:
    int GetR() {
        return m_R;
    }
    int GetI() {
        return m_I;
    }

private:
    int m_R;
    int m_I;
};

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
