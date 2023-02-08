#pragma once

class Point {
public:
	Point(int x, int y);
public:
	int GetX() const;
	int GetY() const;

private:
	int m_x, m_y;
};

class Rectangle {
public:
	Rectangle(int top, int left, int bottom, int right);

public:
	Point CenterPoint() const;

	Rectangle Clone() const;

	void MoveToX(int x);

	void MoveToY(int y);

	Point TopLeft() const;

private:
	int m_top, m_left, m_bottom, m_right;
};