#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

class Circle {
private:
	int m_radius;
public:
	Circle() {
		m_radius = 1;
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
	Circle a;
	a.Circle(); // its error to call constructor explicitly
	a.Print();
}

/*
- For any object constructor is called once and only once.
  However, it is called for every object.
- The constructor cannot be called explicitly on an object.
- Attempting to call constructor explicitly results into compilation error.
*/
