#include <iostream>
using namespace std;

int a = 5;

int main() {
	int a = 2;
	cout << a << endl;		// 2
	cout << ::a << endl;	// 5
}

/*
- Between local identifier and global identifier with same name,
  local dentifier always takes precedence over global identifier.
- In such case, to access global identifier, 
  we use scope resolution operator (::).
*/