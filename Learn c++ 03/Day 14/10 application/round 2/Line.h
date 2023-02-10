#pragma once

class Line {
public:
	Line(int x1, int y1, int x2, int y2);
public:
	int GetX1() const;
	int GetY1() const;
	int GetX2() const;
	int GetY2() const;
	void SetX1(int x1);
	void SetY1(int y1);
	void SetX2(int x2);
	void SetY2(int y2);
public:
	void Draw();
private:
	int m_x1;
	int m_y1;
	int m_x2;
	int m_y2;
};