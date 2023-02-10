#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {
		cout << "From Base::f" << endl;
	}
};

class Derived : public Base {
public:
	 void f() override {
		Base::f();
		cout << "From Derived::f" << endl;
	}
};

class Derived2 : public Derived {
public:
	void f() override{
		Base::f();
		cout << "From Derived::f" << endl;
	}
};


int main() {
	Derived2 derived2;
	Base* pbase = &derived2;
	pbase->f(); // Derived::f
	derived2.f(); // Derived::f
}

/*
- Never override non virtual member functions of the base class.
- If overriding member function of the base class ensure that it is declared  virtual.
*/
