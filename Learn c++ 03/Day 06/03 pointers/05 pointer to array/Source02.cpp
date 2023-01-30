#include <iostream>
using namespace std;

int main() {
	int a[] = { 1, 2, 3 };
	cout << a << endl;

	int* pa = a; // a pointer can point to an array
	cout << pa << endl;
}