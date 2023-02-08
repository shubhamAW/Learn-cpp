#include "Stack.h"

Stack::Stack():m_top(-1){}

bool Stack::Empty() const {
	if (m_top == -1) {
		return true;
	}
	else {
		return false;
	}
}

void Stack::Push(char ch) {
	m_data[++m_top] = ch;

}

char Stack::Top() const {
	return m_data[m_top];
}

void Stack::Pop() {
	if (m_top == -1) return;
	m_top--;
}