#include <iostream>
using namespace std;

void main() {
	int a = 0;
	cout << "Enter an integer: ";
	cin >> a;

	float r = 0.0f;
	cout << "Enter a decimal number: ";
	cin >> r;

	double d = 0.0;
	cout << "Enter yet another decimal number: ";
	cin >> d;

	char c = 0;
	cout << "Enter a character: ";
	cin >> c;

	wchar_t wc = 0;
	cout << "Enter yet another character: ";
	wcin >> wc;

	cout << "a = " << a << endl;
	cout << "r = " << r << endl;
	cout << "d = " << d << endl;
	cout << "c = " << c << endl;
	wcout << "wc = " << wc << endl;
}

/*
What are cin and cout?
* They are objects.
* Used for input and output.

What is <<?
* << is an operator.
* In cout context, << operator is known as insertion or put to operator.

What is >>?
* >> is an operator.
* In  cin context, >> operator is known as extraction or get from operator.

What does endl do?
* It's a function.
* It add a new line and flush the output buffer to output device.

Which other function can be located in place of endl?
* flush.

What does flush do?
* It's a function.
* It flushes the output buffer to the output device.
* Note it doesn't add a new line.
*/
