
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

Person::Person(const Person& other) {
	size_t size = strlen(other.m_pname);
	m_pname = new char[size+ 1];
	strcpy_s(m_pname,size+1, other.m_pname);
	m_age = other.m_age;
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
	if (m_pname != nullptr) {
		delete[] m_pname;
		m_pname = nullptr;
	}
	int size = 0;
	size = strlen(pname);
	m_pname = new char[size+1];
	strcpy_s(m_pname,size+1, pname);
}

Person& Person::operator=(const Person& other) {
	if (this != &other) {
		//delete[] m_pname;
		SetName(other.m_pname);
		SetAge(other.m_age);
	}
	return *this;
}
