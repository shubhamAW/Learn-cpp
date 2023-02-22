class IBase1 {
public:
	virtual void f() = 0;
};

class IBase2 {
public:
	virtual void g() = 0;
};

class Derived : public IBase1, public IBase2 {
public:
	void f() override {}
	void g() override {}

};

int main() {
	Derived d;
	d.f();
	d.g();
}

/*
- Above is an example of multiple interface inheritance.
*/
