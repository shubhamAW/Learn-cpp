#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

struct Circle {
private:
	int m_radius;
public:
	/* accessor or getter */
	int GetRadius() {
		assert(m_radius > 0);
		return m_radius;
	}

	/* mutator or setter */
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
	// Circle a = { 5 }; // Error: since m_radius is declared private hence direct initialization is not possible.
	Circle a;
	a.SetRadius(5);
	int r = a.GetRadius();
	a.Print();
	a.SetRadius(10);
	a.Print();

	// a.m_radius = -5; // Error: m_radius is declared as private hence not accessible.
	a.SetRadius(-5);
}
