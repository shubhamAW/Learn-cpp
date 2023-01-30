#include <iostream>
using namespace std;

void main() {
	int x1 = 0;
	cout << "Input x1: ";
	cin >> x1;

	int y1 = 0;
	cout << "Input y1: ";
	cin >> y1;

	int x2 = 0;
	cout << "Input x2: ";
	cin >> x2;

	int y2 = 0;
	cout << "Input y2: ";
	cin >> y2;

	if (x2 < x1) {
		int t = x1;
		x1 = x2;
		x2 = t;
	}

	if (y2 < y1) {
		int t = y1;
		y1 = y2;
		y2 = t;
	}
}

/*
- If with a block of statements
*/
