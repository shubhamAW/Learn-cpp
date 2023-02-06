#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

class Circle {
private:
	int m_radius;
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
	//a.SetRadius(5);
	int r = a.GetRadius();
	a.Print();
	a.SetRadius(10);
	a.Print();
}

/*
- At the beginning of the program, when object 'a' of Circle is instantiated,
  it comes into existance with m_radius value set to garbage value.
  The garbage value mostly is -ve, which is not a valid value for m_radius.
  Because 'm_radius' is marked with private access, direct assignment to it
  is prohibited. Calling SetRadius at the beginning would work but it is not a
  foolproof solution, as another developer may not call SetRadius at the begin.
- The only solution to this issue is writing constructor in the class.
*/
