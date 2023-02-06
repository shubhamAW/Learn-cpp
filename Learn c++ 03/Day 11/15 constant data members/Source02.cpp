#include <iostream>
using namespace std;

class Math {
public:
	Math() { m_pi = 3.14; }
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
- A const data member cannot be given value in the body of the constructor
  because it is treated as an assignment.
- And assignment to constant data member is prohibited.
*/