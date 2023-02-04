#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

void Print(const Point &point);
Point Offset(const Point &point, int dx, int dy);

int main() {
	Point a = { -1, 1 };
	Print(a);
	Point b = Offset(a, 1, 1); // Point b = temp;
	Print(b);
}

void Print(const Point &point) {
	cout << "x = " << point.x << endl;
	cout << "y = " << point.y << endl;
}

Point /*temp*/ Offset(const Point &point, int dx, int dy) {
	Point t = { 0, 0 };
	t.x = point.x + dx;
	t.y = point.y + dy;
	return t; // Point temp = t;
}