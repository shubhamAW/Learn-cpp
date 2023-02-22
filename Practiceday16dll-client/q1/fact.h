#pragma once

class Exception {
public:
	Exception(int errorcode, const char* description, const char* pfunctionname, int lineno);
public:
	int GetErrorCode() const;
	const char* GetDescription() const;
	const char* GetFunctionName() const;
	int GetLineNo() const;
private:
	int m_errorcode;
	char m_functionname[64];
	char m_description[64];
	int m_lineno;
};

class Factorial {

public:
	void factorial(int num) {}

};