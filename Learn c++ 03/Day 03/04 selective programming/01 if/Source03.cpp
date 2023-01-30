#include <iostream>
using namespace std;

void main() {
	int a = 0;
	cout << "Input coefficient a: ";
	cin >> a;

	int b = 0;
	cout << "Input coefficient b: ";
	cin >> b;

	int c = 0;
	cout << "Input coefficient c: ";
	cin >> c;

	int discriminant = b * b - 4 * a * c;

	double root1 = 0.0, root2 = 0.0;
	if (discriminant >= 0) {
		root1 = (-b - sqrt(discriminant)) / (2 * a);
		root2 = (-b + sqrt(discriminant)) / (2 * a);
	}
	else {
		cout << "Real roots doesn't exist" << endl;
	}
}

/*
- If else statement.
*/