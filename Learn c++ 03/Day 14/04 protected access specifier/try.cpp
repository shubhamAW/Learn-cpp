#include <iostream>
using namespace std;

class Base {
public:
	Base(){}
	Base(int i) : m_i(i) { }
	~Base() {

	}
protected:
	int m_i;
};

class Derived : public Base {
public:
	Derived(int i, int j) : m_j(j) {
		m_i = i;
	}
	~Derived() {

	}
public:
	void Print() const {
		// protected member m_i is accessible to derived class
		cout << m_i << endl;
		cout << m_j << endl;
	}
private:
	int m_j;
};

int main() {
	Derived d(5, 10);
	// d.m_i = 1; // protected member is not accessible to non-member
	d.Print();

}


/*
					Self			Derived				Non-member

	private			Available		Not-available		Not-available

	protected		Available		Available			Not-available

	public			Available		Available			Available

	IMP : We avoid declaring data members protected, as that would unable
	us to make changes to the data members in future. We may declare
	member functions protected.
*/