#include <cstdlib>

#include "Line.h"
#include "Rectangle.h"

int main() {
	system("cls");

	Line l(10, 5, 20, 9);
	l.Draw();

	Rectangle r(25, 5, 45, 9);
	r.Draw();
}