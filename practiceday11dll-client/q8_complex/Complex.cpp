#include"Complex.h"

Complex::Complex(int R,int I):m_R(R),m_I(I){}

Complex::Complex() :m_R(0), m_I(0){}

Complex Complex::Add(const Complex& v) const{
	return Complex((this->m_R + v.m_R), (this->m_I + v.m_I));
}

Complex Complex::Sub(const Complex& v) const {
	return Complex((this->m_R - v.m_R), (this->m_I - v.m_I));
}

Complex Complex::Mul(const Complex& v) const {
    int r = (this->m_R * v.m_R) - (this->m_R * v.m_I);
    int i = (this->m_I * v.m_R) + (this->m_I * v.m_I);
    return Complex(r, i);
}

Complex Complex::Div(const Complex& v) const{
    //  a * c  + (b * d) /((c * c ) + (d*d));
    int r = ((this->m_R * v.m_R) + (this->m_I * v.m_I)) / ((v.m_R * v.m_R) + (v.m_I * v.m_I));
    int i = ((this->m_I * v.m_R) - (this->m_R * v.m_I)) / ((v.m_R * v.m_R) + (v.m_I * v.m_I));
    return Complex(r, i);
}

int Complex::GetR() const {
    return m_R;
}

int Complex::GetI() const {
    return m_I;
}