#include <crtdbg.h>

#include "Line.h"
#include "Rectangle.h"
#include "TextBox.h"

//int main() {
//	{
//		Line l(Point(10, 5), Point(20, 9));
//		Rectangle r(Point(25, 5), Point(45, 9));
//		Shape *pshapes[2] = { &l, &r };
//		for (int i = 0; i < 2; i++) {
//			pshapes[i]->Draw();
//		}
//
//		TextBox t(Point(50, 5), Point(65, 9), "Hello");
//		t.Draw();
//	}
//}

int main() {
	Shape *pshapes[3] = { new Line(Point(10, 5), Point(20, 9)),
		new Rectangle(Point(25, 5), Point(45, 9)),
		new TextBox(Point(50, 5), Point(65, 9), "Hello") };
	for (int i = 0; i < 3; i++) {
		pshapes[i]->Draw();
	}

	for (int i = 0; i < 3; i++) {
		delete pshapes[i];
		pshapes[i] = nullptr;
	}

	_CrtDumpMemoryLeaks();
}