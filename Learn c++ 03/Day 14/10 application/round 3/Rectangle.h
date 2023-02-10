#pragma once

#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(int x1, int y1, int x2, int y2);
public:
	void Draw();
};