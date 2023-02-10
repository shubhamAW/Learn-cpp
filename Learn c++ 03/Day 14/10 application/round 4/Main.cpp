#include <cstdlib>

#include "Line.h"
#include "Rectangle.h"

int main() {
	system("cls");

	Shape* pshapes[] = { new Line(10, 5, 20, 9), new Rectangle(25, 5, 45, 9) };

	for (int i = 0; i < sizeof(pshapes) / sizeof(Shape*); i++)
		pshapes[i]->Draw();

	for (int i = 0; i < sizeof(pshapes) / sizeof(Shape*); i++) {
		delete pshapes[i];
		pshapes[i] = nullptr;
	}
}