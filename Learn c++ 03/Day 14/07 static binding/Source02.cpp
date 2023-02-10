#include <iostream>
using namespace std;

class Base {
public:
	void f() {
		cout << "From Base::f" << endl;
	}
};

class Derived : public Base {
public:
	void f() {
		Base::f();
		cout << "From Derived::f" << endl;
	}
};

int main() {
	Derived derived;
	Base* pbase = &derived;
	pbase->f(); // Base::f
	derived.f(); // Derived::f
}

/*
- There is an issue with the above setup.
- The context referred in above code i.e. derived object is same.
  The behaviour exhibited by the context is however inconsistent when approached directly and indirectly.
- This is bad.
- We expect when the context is same, the behaviour exhibited by it should be consistent when approached
  directly and indirectly.
*/