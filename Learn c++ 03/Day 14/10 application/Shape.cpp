#include "Shape.h"

Shape::Shape(const Point &from, const Point &to) {
	SetFrom(from);
	SetTo(to);
}

Shape::~Shape() {

}

Point Shape::GetFrom() const {
	return m_from;
}

Point Shape::GetTo() const {
	return m_to;
}

void Shape::SetFrom(const Point &point) {
	m_from = point;
}

void Shape::SetTo(const Point &point) {
	m_to = point;
}
