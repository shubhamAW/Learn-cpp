#include "Line.h"

Line::Line(Point &from, Point &to)
: m_from(from), m_to(to) {
}

Line::~Line() {

}

Point Line::GetFrom() const {
	return m_from;
}

Point Line::GetTo() const {
	return m_to;
}

void Line::SetFrom(const Point &point) {
	m_from = point;

}

void Line::SetTo(const Point &point) {
	m_to = point;
}
