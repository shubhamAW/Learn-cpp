#include <iostream>
using namespace std;

void main() {
	for (int i = 0; i < 3; i++) {
		cout << "Hello, World 1" << endl;
		cout << "Hello, World 2" << endl;
		cout << "Hello, World 3" << endl;
		continue;
		cout << "Hello, World 4" << endl;
		cout << "Hello, World 5" << endl;
		cout << "Hello, World 6" << endl;
	}
}

/*
* The 'continue' statement is used to skip the current iteration of the loop.
* The control of the program goes to the next iteration.
* 'continue' works with while, do...while and for in a similar manner.
* Typically 'continue' is executed as a part some if(condition).
*/
