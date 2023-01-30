#include <iostream>
using namespace std;

void f();

int main() {
	f();
	f();
	f();
}

void f() {
	static int i = 1;
	cout << i << endl;
	i = i + 1;
}

/*
- Variable 'i' of 'f' is called as static local variable.
- The lifetime of static local variable is application wide.
- The scope however is limited to the block in which it is defined.
- Static local variables are located in static space or global data space.
- Note any variable located in static/global space is brought into
  existance as soon as application begins execution. It then remains
  in memory till the end of an application.
- Also note, any variable having lifetime application wide doesn't
  mean is accessible to the entire application.
*/