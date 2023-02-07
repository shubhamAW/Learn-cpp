#pragma once

class Integer {
public:
	Integer(int i = 0);
public:
	int Get() const;
	void Set(int i);
public:
	Integer operator+(const Integer &obj);
private:
	int m_i;
};
