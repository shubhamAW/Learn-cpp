#include <crtdbg.h>

class Base {
public:
	Base() {

	}
	~Base() {

	}
};

class Derived : public Base {
public:
	Derived() {

	}
	~Derived() {

	}
};

int main() {
	Derived* pobj = new Derived(); // Base(), Derived()
	delete pobj; // ~Derived(), ~Base()
	pobj = nullptr;
	_CrtDumpMemoryLeaks();
}

/*
- Expected is call to Base constructor and then Derived constructor
  upon creation of Derived object and its happening.
- Expected is call to Derived destructor and then Base destructor
  upon deletion of Derived object and its happening.
- Hence we conclude that above code is working OK.
*/

