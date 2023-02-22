#include "Point.h"

Point::Point() : m_x(0), m_y(0), m_refCount(1) {}

void Point::AddRef() {
	++m_refCount;
}

void Point::Release() {
	--m_refCount;
	if (m_refCount == 0)
		delete this;
}

int Point::GetX() const { return m_x; }

int Point::GetY() const { return m_y; }

void Point::SetX(int x) { m_x = x; }

void Point::SetY(int y) { m_y = y; }