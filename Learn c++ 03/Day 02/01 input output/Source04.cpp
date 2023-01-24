#include <iostream>
using namespace std;

void main() {
	cout << "Sum of 1 + 2 is 3";
	cout << " And Sum of 3 + 4 is 7";

	system("cls"); // clears the screen

	cout << "Sum of 1 + 2 is 3\n";
	cout << "And Sum of 3 + 4 is 7";

	system("cls");

	cout << "Sum of 1 + 2 is 3\a\n";
	cout << "And Sum of 3 + 4 is 7\n";

	system("cls");

	cout << "Sum of 1 + 2 is " << 3 << endl;

	cout << "Sum of " << 4 << " + " << 5 << " is " << 9 << endl;

	cout << "Sum of " << 4 << " + " << 5 << " is " << 4 + 9 << endl;

	int u = 1, v = 2;
	cout << "Sum of " << u << " + " << v << " is " << u + v << endl;

	int principal = 1000, period = 3;
	double roi = 6.5;
	cout << "Principal: " << 1000 << ", Rate of Interest: " << roi << ", Period: " << period << endl;
}

/*
What is endl?
* endl is a function.
* It adds a new line character to the output and flushes the output buffer.
*/
