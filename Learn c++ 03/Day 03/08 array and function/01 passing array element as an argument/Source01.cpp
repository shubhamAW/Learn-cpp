#include <iostream>
using namespace std;

void print(int value);

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	const size_t len = sizeof(arr) / sizeof(arr[0]);
	for (size_t i = 0; i < len; i++)
		print(arr[i]);
}

void print(int value) {
	cout << value << endl;
}

/*
* sizeof looks like a function but its an operator.
* To sizeof type or a variable can be passed as an argument.
* sizeof returns size_t and size_t is a typedef of unsigned int.
*/