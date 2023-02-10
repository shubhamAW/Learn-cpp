#include "Shape.h"

Shape::Shape(int x1, int y1, int x2, int y2)
	: m_x1(x1), m_y1(y1), m_x2(x2), m_y2(y2) {}

int Shape::GetX1() const {
	return m_x1;
}

int Shape::GetY1() const {
	return m_y1;
}

int Shape::GetX2() const {
	return m_x2;
}

int Shape::GetY2() const {
	return m_y2;
}

void Shape::SetX1(int x1) { m_x1 = x1; }

void Shape::SetY1(int y1) { m_y1 = y1; }

void Shape::SetX2(int x2) { m_x2 = x2; }

void Shape::SetY2(int y2) { m_y2 = y2; }