#include<iostream>
using namespace std;

int main() {
	int a = 1;
	double b = 1.0;
	void* pv = NULL;
	pv = &a;
	//*pv = 5;
	*static_cast<int*>(pv) = 5;

	int* abc = static_cast<int*>(pv);
	cout << *abc;

	pv = &b;
	//*pv = 5.0;
	*static_cast<double*>(pv) = 5.0;
}

/*
- 'pv', a pointer to void, is called as a generic pointer.
- Conversion from specific to generic happens implicitly.
- Dereferencing of generic pointer cannot be done.
- Conversion from generic to specific needs to be done explicitly using
  either static_cast or reinterpret_cast.
*/
 