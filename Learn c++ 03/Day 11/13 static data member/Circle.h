#pragma once

class Circle {
public:
	Circle(int r);
public:
	double GetArea() const;
	static double GetArea(int radius);
private:
	int m_r;
	static const double PI;
};
