#include <assert.h>

#include "Integer.h"

Integer::Integer(int i) : m_pi(new int(i)) {}

Integer::Integer(const Integer& obj) : m_pi(new int(*obj.m_pi)) {}

Integer::~Integer() {
	delete m_pi;
	m_pi = nullptr;
}

int Integer::Get() const {
	assert(m_pi != nullptr);
	return *m_pi;
}

void Integer::Set(int i) {
	assert(m_pi != nullptr);
	*m_pi = i;
}

Integer Integer::operator=(const Integer& obj) {
	if (this != &obj)
		*m_pi = *obj.m_pi;
	return *this;
}