class Base {};

class Derived : public Base {};

int main() {
	Derived derived;
	Base* pbase = &derived; // upcasting
}

/*
- Upcasting is converting derived class pointer or reference to base class pointer or reference resp.
- Upcasting happens implicitly.
*/
