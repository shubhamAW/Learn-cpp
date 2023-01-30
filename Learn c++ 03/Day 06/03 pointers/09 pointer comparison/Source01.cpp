#include <iostream>
using namespace std;

#define SIZE 3

int main() {
	typedef int* int_ptr;
	int a[SIZE] = { 1, 6, 3 };

	for (int_ptr pwalker = a, pend = a + SIZE; pwalker < pend; pwalker++) {
		cout << *pwalker << endl;
	}
}
