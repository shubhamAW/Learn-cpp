#include <crtdbg.h>

class Dummy {
public:
	void F();
};

void Dummy::F() {}

class DummySMP {
public:
	DummySMP(Dummy* pobj);
	~DummySMP();
public:
	Dummy* operator->();
private:
	Dummy* m_pobj;
};

DummySMP::DummySMP(Dummy* pobj) : m_pobj(pobj) {}

DummySMP::~DummySMP() {
	delete m_pobj;
	m_pobj = nullptr;
}

Dummy* DummySMP::operator->() { return m_pobj; }

void G() {
	DummySMP dummySMP(new Dummy); // 'dummySMP' is a smart pointer
	dummySMP->F(); // dummySMP->F(); is executed as good as dummySMP.operator->()->F();
}

int main() {
	G();
	G();
	_CrtDumpMemoryLeaks();
}

/*
- Smart pointer essentially is an object.
- It takes responsibility to manage lifetime of dynamically allocated object of another class.
- It pretends to be like a pointer but actually it is not a pointer.
*/
