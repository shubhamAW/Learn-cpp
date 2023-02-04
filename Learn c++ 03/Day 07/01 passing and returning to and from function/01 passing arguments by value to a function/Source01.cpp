#include <iostream>
using namespace std;

void Print(int n);

int main() {
	int u = 1;
	Print(u);
}

void Print(int n) { // int n = u;
	cout << n << endl;
	n = 5; 
	             
}

/*
- 'u' is said to be passed by value to 'n'.
- Note modification done to 'n' in 'Print' function will not be updated in 'u'. 
- Paramter names can be skipped in the prototype but it is not recommended to do so.
*/