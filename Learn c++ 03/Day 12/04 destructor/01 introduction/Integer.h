#pragma once

class Integer {
public:
	Integer(int i = 0);
	~Integer();
public:
	int Get() const;
	void Set(int i);
private:
	int m_i;
};
