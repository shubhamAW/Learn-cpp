#include <iostream>
using namespace std;

#include "ConsoleIO.h"
#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
	: Shape(x1, y1, x2, y2) {}

void Rectangle::Draw() {
	int x1 = GetX1();
	int y1 = GetY1();
	int x2 = GetX2();
	int y2 = GetY2();

	ConsoleIO::GotoXY(x1, y1);
	cout << (char)218 << flush;

	ConsoleIO::GotoXY(x2, y1);
	cout << (char)191 << flush;

	ConsoleIO::GotoXY(x1, y2);
	cout << (char)192 << flush;

	ConsoleIO::GotoXY(x2, y2);
	cout << (char)217 << flush;

	for (int i = x1 + 1; i < x2; i++) {
		ConsoleIO::GotoXY(i, y1);
		cout << (char)196 << flush;
		ConsoleIO::GotoXY(i, y2);
		cout << (char)196 << flush;
	}

	for (int i = y1 + 1; i < y2; i++) {
		ConsoleIO::GotoXY(x1, i);
		cout << (char)179 << flush;
		ConsoleIO::GotoXY(x2, i);
		cout << (char)179 << flush;
	}
}
