#include <iostream>
using namespace std;

int Negate(int n);

int main() {
	int u = 1;
	u = Negate(u); // Before call u = Negate(u); After call u = t;
}

int /* t */ Negate(int n) {
	int retval = -1 * n;
	return retval; // int t = retval;
}
