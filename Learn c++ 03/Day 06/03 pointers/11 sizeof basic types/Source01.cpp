#include <iostream>
using namespace std;

int main() {
	cout << sizeof(int) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(wchar_t) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(bool) << endl;
	//cout << sizeof(void) << endl; //Error
}

// 32 bit application
// sizeof(int) : 4
// sizeof(char) : 1
// sizeof(wchar_t) : 2
// sizeof(float) : 4
// sizeof(double) : 8
// sizeof(bool) : 1

// 64 bit application
// sizeof(int) : 4
// sizeof(char) : 1
// sizeof(wchar_t) : 2
// sizeof(float) : 4
// sizeof(double) : 8
// sizeof(bool) : 1