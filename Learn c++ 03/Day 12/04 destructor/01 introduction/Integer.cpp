#include "Integer.h"

Integer::Integer(int i) : m_i(i) {}

Integer::~Integer() {}

int Integer::Get() const { return m_i; }

void Integer::Set(int i) { m_i = i; }
