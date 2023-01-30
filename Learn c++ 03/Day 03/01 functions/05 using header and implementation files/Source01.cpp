#include <iostream>
using namespace std;

#include "calc.h"

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
* Enclose header file names in <> if it has to be located in standard include directories.
* Enclose header file names in "" if it has to be located in source file directory.
* 
* <> ->  iostream -> standard include directories.
* 
*/