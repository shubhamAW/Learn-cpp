#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
	: m_x1(x1), m_y1(y1), m_x2(x2), m_y2(y2) {}

int Rectangle::GetX1() const {
	return m_x1;
}

int Rectangle::GetY1() const {
	return m_y1;
}

int Rectangle::GetX2() const {
	return m_x2;
}

int Rectangle::GetY2() const {
	return m_y2;
}

void Rectangle::SetX1(int x1) { m_x1 = x1; }

void Rectangle::SetY1(int y1) { m_y1 = y1; }

void Rectangle::SetX2(int x2) { m_x2 = x2; }

void Rectangle::SetY2(int y2) { m_y2 = y2; }

void Rectangle::Draw() {}
