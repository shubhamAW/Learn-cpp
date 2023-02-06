#include <iostream>
using namespace std;

struct Circle {
	int m_radius;

	void Print(Circle* pobj) {
		cout << pobj->m_radius << endl;
	}
};


int main() {
	Circle a = { 5 };
	a.Print(&a);

	Circle b = { 10 };
	b.Print(&b);
}

/*
- When a function is made member function, C++ introduces 'this' pointer within the function.

- this pointer is present in member function.
- this pointer is not present in global function.
*/