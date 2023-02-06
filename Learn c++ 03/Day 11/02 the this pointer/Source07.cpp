#include <iostream>
using namespace std;

struct Circle {
	int m_radius;

	void Print() {
		this = new Circle; // 'this' pointer cannot be assigned address of another object
		cout << m_radius << endl;
	}
};

int main() {
	Circle a = { 5 };
	a.Print();

	Circle b = { 10 };
	b.Print();
}

/*
* - this is a keyword. It exist in Non-static member functions.
* - Specification of 'this' pointer within member function is optional.
  - Hence it is eliminated in above code.
- The 'this' pointer exist only in member function and not in global functions.
- It is set automatically by the program based upon which object is used to call the member function.
- C++ implements 'this' pointer as constant pointer.
- Logically speaking, 'this' can be thought as first parameter of member function.
  Note it is not a member of struct/class/object space.
- Physically, 'this' is passed via register.
- The type of 'this' pointer is same as that of the struct/class type.
*/
