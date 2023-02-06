#include "Line.h"

int main() {
	Point p(1, 1), q(5, 5);
	Line l(p, q);
	p.SetX(-1);
	p.SetY(-1);
}