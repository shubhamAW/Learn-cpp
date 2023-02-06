#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

class Circle {
private:
	int m_radius;
private:
	Circle(int radius = 1) {
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
	Circle u; // check if constructor is called for 'u'?

	Circle* pu = &u; // check if constructor is called for pointer?

	Circle& ru = u; // check if constructor is called for reference?
}

/*
- If constructor is declared private then that class cannot be
  instantiated using that constructor.
*/