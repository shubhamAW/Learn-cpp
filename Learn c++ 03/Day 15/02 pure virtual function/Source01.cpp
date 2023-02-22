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
	// IBase base;
	Dervied derived;
	derived.f();
}

/*
An interface is an abstract class in which exist only public pure virtual
functions. Thus every interface is an abstract class, however every
abstract class is not an interface.

In Microsoft programming, interface name is prefixed with letter 'I'. In CAA
programming, interface name is prefixed with 'cati'.
*/