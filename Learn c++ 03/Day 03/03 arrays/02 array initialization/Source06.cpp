#define C 3

int main() {
	int a[] = { 1, 2, 3 };
	int b[][C] = { { 1, 2, 3 },{ 4, 5, 6 } };
	int c[][C] = { 1, 2, 3, 4, 5, 6, 7 };
}

/*
* C++ can use initializers to fix dimension of an array.
* For double dimension array, column dimension is mandatory. 
* Compiler can figure out row dimension based upon the number of initializers.
*/
