#pragma once

class Circle {
private:
	mutable int m_radius;
	mutable double m_area;
public:
	Circle(int radius = 1);
public:
	int GetRadius() const;
	void SetRadius(int radius) const ;
public:
	void Print() const;
	double GetArea() const;
};