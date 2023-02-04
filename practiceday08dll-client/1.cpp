#include<iostream>
using namespace std;

#include"Header.h"

int main() {
	int* p = new int;
	int* q = new int;
	*p = 2;
	*q = 3;
	cout << get_large(p, q);
	delete p;
	delete q;
	p = nullptr;
	p = nullptr;
}