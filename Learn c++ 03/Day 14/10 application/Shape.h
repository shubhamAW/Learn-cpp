#pragma once

#include "Point.h"

class Shape {
public:
	Shape(const Point &from = Point::Origin, const Point &to = Point::Origin);
	virtual ~Shape();
public:
	Point GetFrom() const;
	Point GetTo() const;
	void SetFrom(const Point &point);
	void SetTo(const Point &point);
public:
	virtual void Draw() = 0;
private:
	Point m_from;
	Point m_to;
};