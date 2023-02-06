#include <iostream>

class Circle {
private:
	int m_radius;
public:
	Circle(int radius = 0) : SetRadius(radius) /* <- initialization list */ {
		
	} 
public:
	int GetRadius() {
		return m_radius;
	}

	void SetRadius(int radius) {
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
- Only data members can be initialized in initialization list.
- Function members cannot be invoked from initialization list.
*/