#include <iostream>

class Math {
public:
	double PI() {
		return 3.14;
	}
};

int main() {
	Math m;
	std::cout << m.PI() << std::endl;
	std::cout << Math::PI() << std::endl;
}

/*
A non-static member function can only be called using
an object of the class.
*/