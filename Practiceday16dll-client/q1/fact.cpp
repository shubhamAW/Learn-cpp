#include "fact.h"
#include<string>


void Factorial::factorial(int num) {
	if (num < 0)
		throw Exception(101, "num must be +ve number.", __FUNCTION__, __LINE__); //readymade macros __FUNCTION__ & __lINE__
	 num * factorial(num - 1);
}


Exception::Exception(int errorcode, const char* description, const char* pfunctionname, int lineno) :m_errorcode(errorcode), m_lineno(lineno) {
	strcpy_s(m_functionname, 64, pfunctionname);
	strcpy_s(m_description, 64, description);
}

int Exception::GetErrorCode() const { return m_errorcode; }
const char* Exception::GetDescription() const { return m_description; }
const char* Exception::GetFunctionName() const { return m_functionname; }
int Exception::GetLineNo() const { return m_lineno; }