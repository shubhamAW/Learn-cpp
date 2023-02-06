#include "Point.h"

const Point Point::Origin;

Point::Point(int x, int y) {
	SetX(x);
	SetY(y);
}

Point::~Point() {

}

int Point::GetX() const {
	return m_x;
}

int Point::GetY() const {
	return m_y;
}

void Point::SetX(int x) {
	m_x = x;
}

void Point::SetY(int y) {
	m_y = y;
}
