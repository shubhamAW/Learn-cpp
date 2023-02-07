#include <assert.h>
#include "Integer.h"

Integer::Integer(int i) : m_pi(new int(i)) {}

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
