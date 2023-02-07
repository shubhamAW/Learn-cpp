#include "Integer.h"

Integer::Integer(int i) : m_i(i) {}

Integer::Integer(const Integer& obj) : m_i(obj.m_i) {}

int Integer::Get() const { return m_i; }

void Integer::Set(int i) { m_i = i; }
