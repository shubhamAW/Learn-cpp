#include <iostream>
using namespace std;

#include "Line.h"
#include "ConsoleIO.h"

Line::Line(int x1, int y1, int x2, int y2)
	: m_x1(x1), m_y1(y1), m_x2(x2), m_y2(y2) {}

int Line::GetX1() const {
	return m_x1;
}

int Line::GetY1() const {
	return m_y1;
}

int Line::GetX2() const {
	return m_x2;
}

int Line::GetY2() const {
	return m_y2;
}

void Line::SetX1(int x1) { m_x1 = x1; }

void Line::SetY1(int y1) { m_y1 = y1; }

void Line::SetX2(int x2) { m_x2 = x2; }

void Line::SetY2(int y2) { m_y2 = y2; }

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