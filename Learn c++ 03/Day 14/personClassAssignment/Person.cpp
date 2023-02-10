
#include"Person.h"
#include <iostream>
#include <cassert>
#include <cstring>

int Person::m_maxAge = 120;

Person::Person(const char* pname, int age) {
	SetAge(age);
    SetName(pname);
}

Person::~Person() {
 	delete[] m_pname;
	m_pname = nullptr;
}


int Person::GetAge() const {
	assert(m_age > 0 && m_age < m_maxAge);
	if (m_age > 0 && m_age < m_maxAge)
		return m_age;
}

const char* Person::GetName() const {
	assert(m_pname != nullptr);
		return m_pname;
}

void Person::SetAge(int age) {
	if (age > 0 && age < m_maxAge)
		m_age = age;
	else
		throw std::invalid_argument("Invalid age");
}

void Person::SetName(const char* pname)  {
	if (pname == nullptr) {
		throw std::invalid_argument("Name is not valid");
	}
	int size = 0;
	size = strlen(pname);
	m_pname = new char[size+1];
	strcpy_s(m_pname,size+1, pname);
}

Person& Person::operator=(const Person& p) {
	this->m_age = p.m_age;
	this->m_pname = p.m_pname;
	return *this;
}
