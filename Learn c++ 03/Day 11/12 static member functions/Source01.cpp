#include <iostream>

class Math {
public:
	static double PI() {
		return 3.14;
	}
};

int main() {
	Math m;
	std::cout << m.PI() << std::endl;
	std::cout << Math::PI() << std::endl;
}

/*
When there are no data members in the class,
the size of an object is 1 byte.

A static member function can be called using both
an object and a class.
*/