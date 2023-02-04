#include<iostream>
using namespace std;

#include"Header.h"

void show_array(int* p, int size) {
	for (int i = 0;i < size;i++) {
		cout << p[i] << " ";
	}
}