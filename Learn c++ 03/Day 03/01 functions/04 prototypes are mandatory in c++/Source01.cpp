#include <iostream>
using namespace std;

int Add(int u, int v) {
	int w = 0;
	w = u + v;
	return w;
}

void main() {
	int a = 0;
	cout << "Enter first number: ";
	cin >> a;

	int b = 0;
	cout << "Enter second number: ";
	cin >> b;

	int c = Add(a, b);

	cout << "Sum of first and second number is " << c << endl;
}

/*
- Above program builds successfully.
*/