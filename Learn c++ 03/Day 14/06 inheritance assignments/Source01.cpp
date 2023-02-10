class Base {
public:
	void f() { m_i = 1; }
	void g() { m_i = 5; }
private:
	int m_i;
};

class Derived : public Base {
public:
	void h() { m_j = 10; }
	void k() { m_j = 50; }
private:
	int m_j;
};

int main() {
	Base base;
	Derived derived;

	Base* pbase = nullptr;
	Derived* pderived = nullptr;

	pbase = &base;

	pderived = &derived;

	pbase = &derived;

	pderived = &base;
}

/*
- A base class pointer can point to objects of itself and of derived.
- A derived class pointer however can point to its own object only i.e
  it cannot point to base object.
*/