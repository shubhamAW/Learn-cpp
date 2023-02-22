class Base1 {
public:
	void f() {}
};

class Base2 {
public:
	void g() {}
};

class Derived : public Base1, public Base2 {

};

int main() {
	Derived d;
	d.f();
	d.g();
}

/*
- Above is an example of multiple class inheritance.
- Implementation of Base1 and Base2 are inherited in Derived class.
- Hence above inheritance is also known as implmentation inheritance.
- Implementation inheritance is also known as class inheritance.
*/