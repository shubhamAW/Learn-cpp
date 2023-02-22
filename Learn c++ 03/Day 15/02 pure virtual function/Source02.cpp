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
	// Base base;
	Dervied derived;
	derived.f();
}

/*
This program illustrates concrete class. The Derived class is a concrete
class. A class which can be instantiated is known as concrete class.
*/