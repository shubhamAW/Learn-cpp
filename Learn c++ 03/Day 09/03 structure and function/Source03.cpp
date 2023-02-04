#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

void print(const Point& point);

int main() {
	Point a = { -1, 1 };
	print(a);
}

void print(const Point& point) {
	cout << "x = " << point.x << endl;
	cout << "y = " << point.y << endl;
}

/*
In this program we are passing structure argument
by reference. This is one of the preferred methods.
We choose to declare const reference to a structure,
if the function is going to simply read the values.
By declaring const reference, the function becomes versatile.
In case if function's purpose is to make changes
to the original object, then we omit const specification
on the reference.
*/