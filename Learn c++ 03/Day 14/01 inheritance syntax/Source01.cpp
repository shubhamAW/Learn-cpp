#include <iostream>
using namespace std;

// Base class can also be called as
// Parent or Super or General
class Base {
public:
	void Print() {
		cout << "From Base::Print" << endl;
	}
};

// Derived class can also be called as
// Child or Sub or Special
class Derived : public Base {
public:
	void hello() {
		cout << "hello";
	}
};

int main() {
	Derived d;
	d.hello();
	d.Print();
}

// Inheritance is also known as 'is-a' or 
// general-special relationship.
//
// Composition/aggregation is also known as
// 'has-a' or whole-part relationship
