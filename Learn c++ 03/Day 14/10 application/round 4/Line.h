#pragma once

#include "Shape.h"

class Line : public Shape {
public:
	Line(int x1, int y1, int x2, int y2);
public:
	void Draw() override;
};