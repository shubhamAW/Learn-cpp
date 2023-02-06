#include "Circle.h"

int main() {
	const Circle a = 5;
	int r = a.GetRadius();
	a.Print();
	double area = a.GetArea();
}

/*
- Declaring a member function with the const keyword specifies that
  the function is a "read-only" function i.e. it does not help modify
  state of the object for which it is called.
- To declare a constant member function, place the const keyword after
  the closing parenthesis of the argument list.
- The const keyword is required on the declaration and on the definition.
*/