#include <iostream>

#include "Line.h"
#include "Rectangle.h"
#include "TextRectangle.h"

int main() {
	Line l(Point(10, 5), Point(20, 9));
	l.Draw();

	Rectangle r(Point(25, 5), Point(45, 9));
	r.Draw();
	
	TextRectangle t(Point(50, 5), Point(65, 9), "Hello");
	Rectangle *pr = &t;
	pr->Draw();
	t.Draw();
}