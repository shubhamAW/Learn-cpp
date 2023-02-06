#pragma once

#include "Point.h"

class Line {
public:
	Line(Point &from, Point &to);
	~Line();
public:
	Point GetFrom() const;
	Point GetTo() const;
	void SetFrom(const Point &point);
	void SetTo(const Point &point);
private:
	Point &m_from;
	Point &m_to;
};