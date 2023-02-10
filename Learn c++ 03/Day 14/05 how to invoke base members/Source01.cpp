#include <iostream>
using namespace std;

class Base {
public:
	Base(int i) : m_i(i) {

	}
	~Base() {

	}
public:
	void Print() {
		cout << m_i << endl;
	}
private:
	int m_i;
};

class Derived : public Base {
public:
	Derived(int i, int j) : Base(i), m_j(j) {

	}
	~Derived() {

	}
public:
	void Print() {
		Base::Print();
		cout << m_j << endl;
	}
private:
	int m_j;
};

int main() {
	Derived d(5, 10);
	d.Print(); // calls Print of Derived class
	d.Base::Print(); // calls Print of Base class
}

/*
- The Derived::Print is overriding Base::Print.
- This is called function overriding.
*/
