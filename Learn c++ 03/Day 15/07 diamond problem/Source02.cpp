#include <iostream>
using namespace std;

class SuperBase {
public:
	SuperBase(int a) : m_a(a) {}
public:
	void Print() {
		cout << m_a << endl;
	}
private:
	int m_a;
};

class Base1 : virtual public SuperBase {
public:
	Base1(int a, int b) : SuperBase(a), m_b(b) {}
private:
	int m_b;
};

class Base2 : virtual public SuperBase {
public:
	Base2(int a, int c) : SuperBase(a), m_c(c) {}
private:
	int m_c;
};

class Derived : public Base1, public Base2 {
public:
	Derived(int a1, int b, int a2, int c, int d, int a3)
		: Base1(a1, b), Base2(a2, c), m_d(d), SuperBase(a3) {}
private:
	int m_d;
};

int main() {
	Derived d(1, 2, 3, 4, 5, 6);
	d.Print();
}
