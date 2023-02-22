#include <iostream>
using namespace std;

class Exception {
public:
	Exception(int errorcode, const char * description, const char * pfunctionname, int lineno)
		: m_errorcode(errorcode), m_lineno(lineno) {
		strcpy_s(m_description, 64, description);
		strcpy_s(m_functionname, 64, pfunctionname);
	}
public:
	int GetErrorCode() const { return m_errorcode; }
	const char * GetDescription() const { return m_description; }
	const char* GetFunctionName() const { return m_functionname; }
	int GetLineNo() const { return m_lineno; }
private:
	int m_errorcode;
	char m_functionname[64];
	char m_description[64];
	int m_lineno;
};

class InvalidRadiusException : public Exception {
public:
	InvalidRadiusException(const char * pfunctionname, int lineno)
		: Exception(101, "Radius must be +ve number.", pfunctionname, lineno) {}
};

class Circle {
private:
	int m_radius;
public:
	Circle(int radius) {
		SetRadius(radius);
	}
public:
	void SetRadius(int radius) {
		if (radius < 0)
			throw InvalidRadiusException(__FUNCTION__, __LINE__);
		m_radius = radius;
	}
};

int main() {
	try {
		Circle a(10);
		a.SetRadius(-5);
	}
	catch (InvalidRadiusException &e) {
		// If we want to handle InvalidRadiusException in some different way then
		// we need to implement its dedicated catch block.
		cout << e.GetErrorCode() << endl;
		cout << e.GetDescription() << endl;
		cout << e.GetFunctionName() << endl;
		cout << e.GetLineNo() << endl;
		//throw; // rethrows the exception
	}
	catch (Exception &e) {
		cout << e.GetErrorCode() << endl;
		cout << e.GetDescription() << endl;
		cout << e.GetFunctionName() << endl;
		cout << e.GetLineNo() << endl;
	}

}

/*
- A try block can have multiple catch blocks but a catch block cannot have multiple try blocks.
- The exception handling mechanism checks for the first catch block that can refer to type of exception object thrown.
  As soon as if finds same, that catch block is executed and no other catch block is checked.
- Nesting of try...catch is possible.
- One can throw exception from constructor but should not be thrown from destructor.
- While writing multiple catch blocks, arrange catch blocks from special exception types to general exception type.
- Once the exception object escapes main function, it breaks the code.
*/

/*
- One can rethrow exception by writing just "throw;" in catch block.
*/
