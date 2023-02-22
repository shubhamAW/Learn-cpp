class Base {
public:
	virtual void f() = 0; // pure virtual function
};

class Dervied : public Base {
public:
	void f() {

	}
};

int main() {
	Base *pbase = nullptr; // pointer definition of abstract class allowed
	Dervied derived;
	pbase = &derived;
	pbase->f();

	Base &rbase = derived; // reference definition of abstract class allowed
	rbase.f();
}

/*
Though we cannot instantiate object of an abstract class, we can define
pointer and reference of an abstract class.
*/