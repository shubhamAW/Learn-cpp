#include <assert.h>
#include <iostream>
#include <stdexcept>
using namespace std;

class Circle {
private:
	int m_radius;
public:
	Circle() { // default or non-parametric constructor
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
	int r = a.GetRadius();
	a.Print();
	a.SetRadius(10);
	a.Print();
}

/*
- A constructor is a special member function of a class.
- It is called automatically at the definition of the object.
- The name of the constructor function should be same as the class name.
- No return type has to be specified on constructor function.
- Specifing return type on the constructor results into compilation error.
- When a class is written without any constructor, compiler provides default constructor.
- This constructor doesn't do anything.
- Writing a constructor of any form (such as default or parametric or copy) prohibits compiler from
  adding default constructor on its own.
- Constructor provides us opportunity to initialize the object data members.
- If we miss this opportunity i.e. we didnot write initialization code in
  constructor then the object data members will remain uninitialized.
*/
