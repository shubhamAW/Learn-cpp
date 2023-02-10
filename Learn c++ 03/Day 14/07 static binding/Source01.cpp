class Base {
public:
	void f() {

	}
};

class Derived : public Base {
public:
	void f() {

	}
};

int main() {
	Base base;
	Derived derived;

	Base* pbase = nullptr;
	Derived* pderived = nullptr;

	pbase = &base;
	pbase->f(); // Base::f()

	pderived = &derived;
	pderived->f(); // Derived::f()

	pbase = &derived;
	pbase->f(); // Base::f();

}