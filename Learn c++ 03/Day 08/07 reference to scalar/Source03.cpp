#include<iostream>
int main() {
	int i = 1;
	int& j = i;
	int& k = j;
	k += 5;

	int* ptr = &j;
	*ptr = 10;
	std::cout << sizeof(k) << std::endl;
	std::cout << sizeof(ptr)<<std::endl;
}