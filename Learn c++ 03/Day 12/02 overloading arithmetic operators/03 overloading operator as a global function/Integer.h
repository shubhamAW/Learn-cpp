#pragma once

class Integer {
public:
	Integer(int i = 0);
public:
	int Get() const;
	void Set(int i);
private:
	int m_i;
};

Integer operator+(const Integer& lobj, const Integer& robj);
