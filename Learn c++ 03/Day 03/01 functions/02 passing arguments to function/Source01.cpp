#include <iostream>
using namespace std;

void Add(int u, int v) { // 'u' and 'v' are known as parameters
	int w = 0;
	w = u + v;
	cout << "Sum of first and second number is " << w << endl;
}

void main() {
	int a = 0;
	cout << "Enter first number: ";
	cin >> a;

	int b = 0;
	cout << "Enter second number: ";
	cin >> b;

	Add(a, b); // 'a' and 'b' are known as arguments
}
