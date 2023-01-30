#include "add.h"


int main() {
	int result = 0;
	result = 3 + 5; // inline
	result = add(1, 2); // not inline
	
}

/*
* If function is inline then its declaration and defination must be stored in header file.
* Not Keeping defination in header file will result into a Linking error..
* 
* if function is non-inline then only declaration must be stored in header file.
* Defination must be stored in separate implementation file.
* 
* Both declaration and definition of inline function is stored in header file.
* Non-inline function definition is stored in separate implementation file. Header contains only declaration.
* 
* Keeping defination in header file will result in a Linking Error...
* 
*/