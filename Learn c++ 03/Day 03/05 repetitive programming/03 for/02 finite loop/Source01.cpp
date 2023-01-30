#include <iostream>
using namespace std;

void main() {
	int i = 0;
	for (i = 0; i < 3; ++i) {
		cout << "Hello, World" << endl;
	}
	cout << "i = " << i << endl;
}

/*
What is general systax of for?
* for(initialization; cond; expression) {
	  statement-1;
	  statement-2;
	  statement-3;
	  }

* All sections are optional but ';' separating sections are not optional.
* If loop variable is defined outside the loop then it remains in the scope after the termination of the for loop.
* for is to be used when number of iterations to be perfomed are known in advance.
*/
