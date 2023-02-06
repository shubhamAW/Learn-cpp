#include <iostream>
using namespace std;

class Math {
public:
	static const double PI;
};

const double Math::PI = 3.14;

int main() {
	Math m;
	cout << m.PI << endl;
	cout << Math::PI << endl;
}