#include <iostream>
using namespace std;

void Print(const char* ps[], size_t size);

int main() {
	const char* ps[] = { "Hello, World", "Hi, World" };
	size_t size = sizeof(ps) / sizeof(const char*);
	Print(ps, size);
}

void Print(const char* ps[], size_t size) {
	/* following loop prints each string */
	for (size_t i = 0; i < size; i++)
		cout << ps[i] << endl;
}
