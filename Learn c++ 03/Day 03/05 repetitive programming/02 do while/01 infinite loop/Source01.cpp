#include <iostream>
using namespace std;

void main() {
	do
		cout << "Hello, World" << endl;
	while (true);
}

/*
* do...while is a post test loop.
* Post test loop is a loop in which test expression is evaluated after the completion of the loop body.
* If test expression evaluates to true, the loop body is repeated else it is terminated.
* do ... while(true) results into an infinite loop.
*/
