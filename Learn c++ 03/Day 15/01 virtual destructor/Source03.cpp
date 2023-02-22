#include <crtdbg.h>

class Base {
public:
	Base() {

	}
	virtual ~Base() {

	}
};

class Derived : public Base {
public:
	Derived() {

	}
	~Derived() override {

	}
};

int main() {
	Base* pobj = new Derived(); // Base(), Derived()
	delete pobj; // ~Derived(), ~Base()
	pobj = nullptr;
	_CrtDumpMemoryLeaks();
}

/*
- It is strongly recommended to write virtual destructor in base class even if it is empty.
- Though base class may not consume resource, derived class may consume.
*/
