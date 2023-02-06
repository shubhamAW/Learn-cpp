#pragma once

class Point {
public:
	Point(int x = 0, int y = 0);
	~Point();
public:
	int GetX() const;
	int GetY() const;
	void SetX(int x);
	void SetY(int y);
public:
	static const Point Origin;
private:
	int m_x;
	int m_y;
};
