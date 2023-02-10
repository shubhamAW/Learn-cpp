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
	void f() {}
	virtual void k() {}
private:
	int m_j;
};

int main() {
	Base u, v;
	Derived x, y;

	Base *pbase = &u;
	pbase->f();
	pbase->g();

	pbase = &x;
	pbase->f();
	pbase->g();
}