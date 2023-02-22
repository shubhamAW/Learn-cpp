#pragma once

#include "IPoint.h"

class Point : public IPoint {
public:
	Point();
public:
	void AddRef() override;
	void Release() override;
public:
	int GetX() const override;
	int GetY() const override;
	void SetX(int x) override;
	void SetY(int y) override;
private:
	int m_x;
	int m_y;
	unsigned m_refCount;
};
