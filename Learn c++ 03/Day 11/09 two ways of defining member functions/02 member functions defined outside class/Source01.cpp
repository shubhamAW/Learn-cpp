#include "Circle.h"

int main() {
	Circle a; // Invokes default constructor
	a.Print();
	double area = a.GetArea();

	Circle b(5); // Invokes parametric constructor
	b.Print();
	area = b.GetArea();

	Circle c = 10; // Invokes parametric constructor, if it is single parametric 
	area = c.GetArea();
}

/*
- When member functions are defined outside the class, they are not inline by default.
*/