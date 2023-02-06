#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

class Circle {
private:
	int m_radius;
public:
	/* parametric constructor*/
	Circle(int radius) {
		SetRadius(radius);
	}
public:
	int GetRadius() {
		assert(m_radius > 0);
		return m_radius;
	}

	void SetRadius(int radius) {
		if (radius <= 0)
			throw invalid_argument("Radius must be positive number.");
		m_radius = radius;
	}
public:
	void Print() {
		cout << GetRadius() << endl;
	}
};

int main() {
	Circle a(5); // this syntax works for single and multi parametric constructor

	Circle b = 10; // this syntax works for single parametric constructor only

	Circle c = { 5 }; // this syntax works for single and multi parametric constructor
}

/*
- This program introduces parametric constructor.
*/