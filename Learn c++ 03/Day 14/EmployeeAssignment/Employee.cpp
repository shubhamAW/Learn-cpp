#include "Employee.h"
#include <cstring>
#include <stdexcept>
#include <cassert>

//Constructor & destructor

Employee::Employee(const char* pname, int age, const char* department) {
	SetAge(age);
	SetName(pname);
	SetDepartment(department);
}

Employee::~Employee() {
	delete [] m_pname;
	m_pname = nullptr;
	delete [] m_department;
	m_department = nullptr;
}



//Setters

void Employee::SetAge(int age) {
	m_age = age;
}

void Employee::SetName(const char* pname)
{
	if (pname == nullptr) {
		throw std::invalid_argument("Invalid Name");
	}

	if (m_pname != nullptr) {
		delete[] m_pname;
		m_pname = nullptr;
	}
	size_t size = strlen(pname);
	m_pname = new char[size + 1];
	strcpy_s(m_pname, size + 1, pname);
}

void Employee::SetDepartment(const char* department) {
	if (department == nullptr) {
		throw std::invalid_argument("Invalid department Name");
	}
	if (m_department != nullptr) {
		delete [] m_department;
		m_department = nullptr;
	}
	size_t size = strlen(department);
	m_department = new char[size + 1];
	strcpy_s(m_department, size + 1, department);
}

//Getters 

const char* Employee::GetName() const {
	assert(m_pname != nullptr);
	return m_pname;
}

const char* Employee::GetDepartment() const {
	assert(m_department != nullptr);
	return m_department;
}

int Employee::GetAge() const {

	return m_age;
}
