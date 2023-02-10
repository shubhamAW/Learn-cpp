#include <iostream>
using namespace std;

#include "Line.h"
#include "ConsoleIO.h"

Line::Line(int x1, int y1, int x2, int y2) : Shape(x1, y1, x2, y2) {}

void Line::Draw() {
	int x1 = GetX1();
	int y1 = GetY1();
	int x2 = GetX2();
	int y2 = GetY2();

	ConsoleIO::GotoXY(x1, y1);
	cout << '*' << flush;

	ConsoleIO::GotoXY(x2, y2);
	cout << '*' << flush;
}