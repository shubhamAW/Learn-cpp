#include<iostream>
using namespace std;

#include"Header.h"

int get_large(int* u, int* v) {
	return *u > * v ? *u :  *v;
}