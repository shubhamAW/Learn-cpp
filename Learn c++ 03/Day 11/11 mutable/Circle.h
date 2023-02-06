#pragma once

class Circle {
private:
	int m_radius;
	mutable double m_area;
public:
	Circle(int radius = 1);
public:
	int GetRadius() const;
	void SetRadius(int radius);
public:
	void Print() const;
	double GetArea() const;
};