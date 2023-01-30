#include <iostream>
using namespace std;

void print(int v[]);

int main() {
	int a[] = { 1, 2, 3 };
	size_t len = sizeof(a) / sizeof(int);
	print(a);

	int b[] = { 10, 20, 30, 40 };
	len = sizeof(b) / sizeof(int);
	print(b);

	int c[] = { 100, 200 };
	len = sizeof(c) / sizeof(int);
	print(c);
}

void print(int v[]) {
	size_t len = sizeof(v) / sizeof(int);
	for (size_t i = 0; i < len; i++) {
		cout << v[i] << endl;
	}
}

/*
- Note the parameter 'v' of Print function pretends to be an array.
- Actually, it is a pointer.
- Hence sizeof(v) / sizeof(int) doesn't calculate to the actual number of
  elements of the passed array.
*/