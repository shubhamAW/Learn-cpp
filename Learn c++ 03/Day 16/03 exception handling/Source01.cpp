#include <iostream>

class Circle {
private:
	int m_radius;
public:
	void SetRadius(int radius) {
		if (radius < 0)
			throw 101;
		m_radius = radius;
	}
};

int main() {
	try {
		Circle a;
		a.SetRadius(-5);
	}
	catch (int e) {
		std::cout << e << std::endl;
	}
}
