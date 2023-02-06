#include "Circle.h"

int main() {
	const Circle a = 5;
	int r = a.GetRadius();
	a.Print();
	double area = a.GetArea();
}

/*
- Non-const function cannot be called on const object.
- Presently, 'GetRadius', 'Print' and 'GetArea' are non-const member functions.
*/