#include <iostream>
using namespace std;

void main() {
	int a = 0;
	cout << "Enter first integer: ";
	cin >> a;

	int b = 0;
	cout << "Enter second integer: ";
	cin >> b;

	int c = 0;
	cout << "Enter third integer: ";
	cin >> c;

	int largest = 0;

	if (a > b && a > c)
		largest = a; // a = 5, b = 3, c = 2
	else if (b > c)
		largest = b; // a = 2, b = 5, c = 3
	else
		largest = c; // a = 2, b = 3, c = 5

	cout << "Largest value between " << a << ", " << b << " and " << c << " is " << largest << endl;
}

/*
- if...else if ladder
- multiway conditional statement
*/
