#include <iostream>
using namespace std;

class Math {
public:
	Math() : PI(3.14) {}
public:
	const double PI;
};

int main() {
	Math m;
	cout << m.PI << endl;
}

/*
- const data member can be declared with public access.
- This is a policy decision.
- Usually we don't prefer declare any data member as public. We prefer private.
*/
