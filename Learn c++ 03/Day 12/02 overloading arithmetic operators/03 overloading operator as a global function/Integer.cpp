#include "Integer.h"

Integer::Integer(int i) : m_i(i) {}

int Integer::Get() const { return m_i; }

void Integer::Set(int i) { m_i = i; }

Integer operator+(const Integer& lobj, const Integer& robj) {
	Integer result;
	result.Set(lobj.Get() + robj.Get());
	return result;
}
