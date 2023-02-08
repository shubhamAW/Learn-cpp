#pragma once


class Stack {
public:
	Stack();
public:
	bool Empty() const;
	void Push(char ch);
	char Top() const;
	void Pop();
private:
	int m_top;
	char m_data[100];
};