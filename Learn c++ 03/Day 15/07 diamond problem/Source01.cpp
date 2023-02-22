#include <iostream>
using namespace std;

class SuperBase {
public:
	void Print() {
		cout << m_a << endl;
	}
private:
	int m_a;
};

class Base1 : public SuperBase {
private:
	int m_b;
};

class Base2 : public SuperBase {
private:
	int m_c;
};

class Derived : public Base1, public Base2 {
private:
	int m_d;
};

int main() {
	Derived d;
	d.Print();
}
