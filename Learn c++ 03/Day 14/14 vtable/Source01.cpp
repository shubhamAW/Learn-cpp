class Base {
public:
	virtual void f() {}
	virtual void g() {}
	void h() {}
private:
	int m_i;
};

class Derived : public Base {
public:
	void f() override {}
	virtual void k() {} // Note locals window doesn't show 'k' in vtable view of Derived class. However it is present.
private:
	int m_j;
};

int main() {
	Base u, v;

	Derived x, y;

	Base* pbase = nullptr;

	pbase = &u;
	pbase->f();
	pbase->g();

	pbase = &x;
	pbase->f();
	pbase->g();
}

/*
- Note _vfptr is per object and vtable is per class.
- vtable is stored in constant memory.
*/
