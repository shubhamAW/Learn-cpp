#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		cout << "Hello, World 1" << endl;
		cout << "Hello, World 2" << endl;
		cout << "Hello, World 3" << endl;
		break; // terminates the loop
		cout << "Hello, World 4" << endl;
		cout << "Hello, World 5" << endl;
		cout << "Hello, World 6" << endl;
	}
}

/*
* The 'break' is a loop control statement.
* It is used to terminate the loop prematurely.
* 'break' works with while, do...while and for in a similar manner.
* Typically 'break' is executed as a part some if(condition).
*/
