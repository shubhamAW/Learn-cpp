#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int* pa = &a;

	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;

	a = 2; // direct access
	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;

	*pa = 5; // indirect access
	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;
}