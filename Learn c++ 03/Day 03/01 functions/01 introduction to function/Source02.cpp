#include <iostream>
using namespace std;

/* Function definition */
void Add() {
	int a = 0;
	cout << "Enter first number: ";
	cin >> a;

	int b = 0;
	cout << "Enter second number: ";
	cin >> b;

	int c = 0;
	c = a + b;

	cout << "Sum of first and second number is " << c << endl;
}

void main() {
	Add(); /* function call step over - f10 */
	Add(); /* step into - f11*/
	Add(); /* step out - shift +  f11 */
}

/*
* Both 'main' and 'Add' are known as functions.
* A function is a named reusable code block.
* 'main' is called caller and 'Add' is called callee.
* 
* function useful in DRY principle - Do Not Repeate Yourself..
*/
