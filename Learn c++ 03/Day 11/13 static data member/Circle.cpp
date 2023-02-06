#include "Circle.h"

// definition of static data member
const double Circle::PI = 3.1428;

Circle::Circle(int r) : m_r(r) {}

double Circle::GetArea() const {
	return PI * m_r * m_r;
}

double Circle::GetArea(int radius) {
	return PI * radius * radius;
}
