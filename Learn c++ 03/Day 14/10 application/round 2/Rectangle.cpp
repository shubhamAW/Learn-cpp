#include <iostream>
using namespace std;

#include "ConsoleIO.h"
#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
	: m_x1(x1), m_y1(y1), m_x2(x2), m_y2(y2) {}

int Rectangle::GetX1() const {
	return m_x1;
}

int Rectangle::GetY1() const {
	return m_y1;
}

int Rectangle::GetX2() const {
	return m_x2;
}

int Rectangle::GetY2() const {
	return m_y2;
}

void Rectangle::SetX1(int x1) { m_x1 = x1; }

void Rectangle::SetY1(int y1) { m_y1 = y1; }

void Rectangle::SetX2(int x2) { m_x2 = x2; }

void Rectangle::SetY2(int y2) { m_y2 = y2; }

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
