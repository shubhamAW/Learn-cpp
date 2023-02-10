#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "From Base Default Constructor" << endl;
	}

	Base(const Base& obj) {
		cout << "From Base Copy Constructor" << endl;
	}

	~Base() {
		cout << "From Base Destructor" << endl;
	}

	Base& operator=(const Base& obj) {
		if (this != &obj) { // checking for self assignment
			// memberwise assignment
		}
		return *this;
	}
};

class Derived : public Base {};

int main() {
	Derived u; // invokes compiler supplied default constructor of Derived class
	Derived v = u; // invokes compiler supplied copy constructor of Derived class
	v = u; // invokes compiler supplied copy assignment operator of Derived class
}

/*
- Compiler implemented
  - default constructor of derived class calls default constructor of base class.
  - copy constructor of derived class calls copy constructor of base class.
  - copy assignment operator of derived class calls copy assignment operator of base class.
  - destructor of Derived calls destructor of Base
*/