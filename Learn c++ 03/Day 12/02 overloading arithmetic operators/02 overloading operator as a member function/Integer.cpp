#include "Integer.h"

Integer::Integer(int i) : m_i(i) {}

int Integer::Get() const { return m_i; }

void Integer::Set(int i) { m_i = i; }

Integer Integer::operator+(const Integer &obj) {
	Integer result;
	result.m_i = m_i + obj.m_i;
	return result;
}
