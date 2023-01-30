#include <iostream>
using namespace std;

int main() {
	goto END;
	cout << "Hello, World" << endl;
END:
	cout << "Exiting the Program" << endl;
}

/*
* Avoid using goto statement in a program.
* If at all you want to use goto, use it only for forward jump.
* A goto statement that jumps backward creates a loop.
* Too many goto statements are likely to create spaghetti code.
*/