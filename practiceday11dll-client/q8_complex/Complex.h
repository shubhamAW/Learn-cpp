#pragma once

class Complex {
public:
	Complex(int R, int I);
	Complex();
public:
	Complex Add(const Complex& v) const;
	Complex Sub(const Complex& v) const;
	Complex Mul(const Complex& v) const;
	Complex Div(const Complex& v) const;

public:
	int GetR() const;
	int GetI() const;
private:
	int m_R, m_I;
};