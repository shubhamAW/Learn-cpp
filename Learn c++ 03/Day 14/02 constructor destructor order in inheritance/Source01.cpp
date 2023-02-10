#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "From Base Constructor" << endl;
	}
	~Base() {
		cout << "From Base Destructor" << endl;
	}
};

class Derived : public Base {
public:
	Derived() {				
		cout << "From Derived Constructor" << endl;
	}
	~Derived() {
		cout << "From Derived Destructor" << endl;
	}
};

int main() {
	Derived d;
}

/*
This program illustrates order of constructor and destructor that
happens between Base and Derived class.

When instantiated object of Derived i.e. 'd', we observed it was constructor
of 'Base' class that got executed first and then the constructor of 'Derived'.

The destructor order is always reverse of constructor order.

So at the end of the program, the destructor of 'Derived' was executed first
and then the destructor of 'Base' class.
*/