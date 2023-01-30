#include <iostream>
using namespace std;

int Add(int u, int v); // Function Decaration / Function Prototype

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

int Add(int u, int v) {
	int w = 0;
	w = u + v;
	return w;
}

/*
- Function definition can replace function declaration but vice versa is not true.
- If function definition is to replace function declaration, then order of
  appearance of function definition and function call matters to compiler.
  Function definition should appear before function call.

  imp->
- Compiler needs declaration. Compiler doesn't need definition. ( compiler on right click on file) 
- Linker needs definition. ( compile file - go to project - project only - link only option)
*/
