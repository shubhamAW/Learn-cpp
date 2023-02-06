#include <iostream>
using namespace std;

struct Dummy {
	void F() {
		cout << "From Dummy::F" << endl;
	}
};

int main() {
	Dummy dummy;
	dummy.F();
}

/*
- In c++, functions can be a member of a structure.
*/