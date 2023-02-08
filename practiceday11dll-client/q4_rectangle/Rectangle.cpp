#include "Rectangle.h"

Point::Point(int x , int y):m_x(x),m_y(y){}

int Point::GetX() const {
	return m_x;
}

int Point::GetY() const {
	return m_y;
}


Rectangle::Rectangle(int top, int left, int bottom, int right) :m_top(top), m_left(left), m_bottom(bottom), m_right(right){}

Point Rectangle::CenterPoint() const {
	int x = (m_left + m_right) / 2;
	int y = (m_top + m_bottom) / 2;

	return Point(x, y);
}

Rectangle Rectangle::Clone() const {
	return Rectangle(m_top, m_left, m_bottom, m_right);
}

void Rectangle::MoveToX(int x) {
	int delta = x - m_left;
	m_left += delta;
	m_right += delta;
}

void Rectangle::MoveToY(int y) {
	int delta = y - m_top;
	m_top += delta;
	m_bottom += delta;
}

Point Rectangle::TopLeft() const {
	return Point(m_left, m_top);
}