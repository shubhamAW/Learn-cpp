#pragma once

class IPoint {
public:
	virtual void AddRef() = 0;
	virtual void Release() = 0;
public:
	virtual int GetX() const = 0;
	virtual int GetY() const = 0;
	virtual void SetX(int x) = 0;
	virtual void SetY(int y) = 0;
};
