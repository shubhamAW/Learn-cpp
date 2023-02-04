#include <iostream>
using namespace std;

int main() {
	const char* ps[] = { "Hello, World", "Hi, World" };
	size_t size = sizeof(ps) / sizeof(const char*);

	/* following loop prints each string */
	for (size_t i = 0; i < size; i++)
		cout << ps[i] << endl;

	/* following loop prints first character of each string */
	for (size_t i = 0; i < size; i++)
		cout << *ps[i] << endl;

	/* following loop prints address of each string */
	for (size_t i = 0; i < size; i++)
		cout << static_cast<const void*>(ps[i]) << endl;
}

/*
* 'ps' is referred as array of pointers.
* There are two pointers in 'ps', since there are two string literals as initializers.
* Followings are the interpretation of various expressions:
* Just 'ps' returns base address of entire array.
* 'ps[i]' returns base address of ith string.
* '*ps[i]' returns first character of ith string
* There is special treatement given by cout to char * or const char *.
* It prints entire string and not the content of the pointer which is address.
* To print content of the pointer char * or const char * will have to typecasted to 'void *' or 'const void *'.
*/
