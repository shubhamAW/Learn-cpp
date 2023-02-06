#pragma once

#include <assert.h>
#include <iostream>
#include <stdexcept>

class Circle {
private:
	int m_radius;
public:
	Circle(int radius = 1) {
		SetRadius(radius);
	}
public:
	int GetRadius() {
		//assert(m_radius > 0);
		return m_radius;
	}

	void SetRadius(int radius) {
		if (radius <= 0)
			throw std::invalid_argument("Radius must be positive number.");
		m_radius = radius;
	}
public:
	void Print() {
		std::cout << GetRadius() << std::endl;
	}

	double GetArea() {
		int radius = GetRadius();
		return 3.14 * radius * radius;
	}
};