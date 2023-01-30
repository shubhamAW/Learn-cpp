#include <iostream>
using namespace std;

void main() {
	int n = 0;
	cout << "Input a Number: ";
	cin >> n;

	int result = n;
	if (n < 0)
		result = -n;

	cout << "Absolute value of " << n << " is " << result << endl;
}

/*
- Simple if statement.
*/