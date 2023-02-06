#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

class Circle {
private:
	int m_radius;
public:
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
- Constructor is not called for pointer and reference.
- Since constructor is not called, the destructor is also not called
  for pointer and reference.

- Why constructor is not called for pointer?
  Remember, pointer is not an object. It points to an object.
  Hence since its not an object in itself, constructor is not called.

- Why constructor is not called for reference?
  Reference refers to referent. Since referent is already constructed there is
  no need to call constructor for the reference.
*/