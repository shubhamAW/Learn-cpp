#include <iostream>
using namespace std;

void print(int v[], size_t len);

int main() {
	size_t len = 0;

	int a[] = { 1, 2, 3 };
	len = sizeof(a) / sizeof(int);
	print(a, len);

	int b[] = { 10, 20, 30, 40 };
	len = sizeof(b) / sizeof(int); 
	print(b, len);

	int c[] = { 100, 200 };
	len = sizeof(c) / sizeof(int);
	print(c, len);
}

void print(int v[], size_t len) {
	for (size_t i = 0; i < len; i++) {
		cout << v[i] << endl;
	}
}