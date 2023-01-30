#include <iostream>
using namespace std;

void main() {
	int i = 0;
	do {
		cout << "Hello, World" << endl;
		i++;
	} while (i < 3);
}

/*
* do...while loop is a post test loop.
* First iteration is sure. Next iteration depends upon the result of test expression.
* If test expression evaluates to true then do...while loop body is repeated else it is terminated.
*/