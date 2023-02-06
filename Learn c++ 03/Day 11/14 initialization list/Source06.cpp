#include <iostream>

class Circle {
private:
	int m_radius;
public:
	Circle(int radius = 0) : m_radius(0) /* <- initialization list */ {
		SetRadius(radius);
	}
public:
	int GetRadius() {
		return m_radius;
	}

	void SetRadius(int radius) : m_radius(0) {
		if (radius >= 0)
			m_radius = radius;
	}
public:
	void Print() {
		std::cout << GetRadius() << std::endl;
	}
};

int main() {
	Circle a(5); // Invokes default constructor
	a.Print();
}

/*
- Initialization list can only be used with constructor and
  not with any other member function.
*/