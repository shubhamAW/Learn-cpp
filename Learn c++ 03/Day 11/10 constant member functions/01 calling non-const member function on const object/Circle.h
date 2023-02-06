#pragma once

class Circle {
private:
	int m_radius;
public:
	Circle(int radius = 1);
public:
	int GetRadius();
	void SetRadius(int radius);
public:
	void Print();
	double GetArea();
};