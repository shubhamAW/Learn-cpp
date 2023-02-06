#include "Circle.h"

int main() {
	Circle u(10), v(20);
	double area = u.GetArea();
	area = v.GetArea();
	area = Circle::GetArea(30);
}

/*
- When to declare data member as static?
  When the state of the data member is same across all objects.
  Such data member we prefer to declare as static data member.
- Always remember to define static data member outside the class
  in an implementation file. Note there should be only single definition
  of static data member. If this definition is not written, or written
  multiple times across several source files then it results into
  linking error.
*/
