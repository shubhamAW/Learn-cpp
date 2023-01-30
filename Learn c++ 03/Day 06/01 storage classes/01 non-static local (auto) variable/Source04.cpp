#include <iostream>
using namespace std;

void f();

int main() {
	f();
	f();
	f();
}

void f() {
	int i = 1;
	cout << i << endl;
	i = i + 1;
}


/*
- Lifetime of local variable is limited to the block.
- Everytime control exits 'f', 'i' variable is destroyed and
  is created newly when control enters 'f' again.
- Since 'i' is getting created newly, it is initialized to 1.
- Hence we get output 1 1 1 when above program is executed.
*/
