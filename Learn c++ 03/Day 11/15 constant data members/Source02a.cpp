#include <iostream>
using namespace std;

class Math {
public:
	Math() : m_pi(3.14) {}
public:
	double PI() {
		return m_pi;
	}
private:
	const double m_pi;
};

int main() {
	Math m;
	cout << m.PI() << endl;
}

/*
- A constant data member can only be intialized using initialization list.
*/