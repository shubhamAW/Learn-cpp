#include <iostream>

class Math {
public:
	Math() : m_pi(3.14) {
		// m_pi = 3.14; // this expression is an error because we're trying to assign to const data member
	}
public:
	double PI() {
		return m_pi;
	}
private:
	const double m_pi;
};

int main() {
	Math m;
	std::cout << m.PI() << std::endl;
}

/*
- Initialization of const data member is compulsory.
- Initialization of const data member must be done in the initialization list and
  not in the body of the constructor.
- It cannot be given value in the body of the constructor
  because it is treated as an assignment. And assignment to a constant
  data member is not possible.
*/