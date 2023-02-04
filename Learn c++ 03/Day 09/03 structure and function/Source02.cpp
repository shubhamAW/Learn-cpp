#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

void print(const Point* ppoint);

int main() {
	Point a = { -1, 1 };
	print(&a);
}

void print(const Point* ppoint) {
	cout << "x = " << ppoint->x << endl;
	cout << "y = " << ppoint->y << endl;
}

/*
In this program we are passing structure argument
by address. This is one of the preferred methods.
We choose to declare pointer pointing to const
structure, if the function is going to simply
read the values. By declaring pointer to const,
the function becomes versatile.
In case if function's purpose is to make changes
to original object, then we omit const specification
on the pointer.
*/