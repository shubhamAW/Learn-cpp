#include<iostream>
using namespace std;

#include"Header.h"


int main() {
	int* arr = new int[5];
	for (int i = 0;i < 5;i++) {
		cin >> arr[i];
	}

	show_array(arr, 5);
	delete[] arr;
	arr = nullptr;
}