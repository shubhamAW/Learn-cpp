#include <iostream>
using namespace std;

int main() {
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(wchar_t*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	cout << sizeof(bool*) << endl;
	cout << sizeof(void*) << endl;
}

// 32 bit application
// sizeof(int*) : 4
// sizeof(char*) : 4
// sizeof(wchar_t*) : 4
// sizeof(float*) : 4
// sizeof(double*) : 4
// sizeof(bool*) : 4
// sizeof(void*) : 4

// 64 bit application
// sizeof(int*) : 8
// sizeof(char*) : 8
// sizeof(wchar_t*) : 8
// sizeof(float*) : 8
// sizeof(double*) : 8
// sizeof(bool*) : 8
// sizeof(void*) : 8