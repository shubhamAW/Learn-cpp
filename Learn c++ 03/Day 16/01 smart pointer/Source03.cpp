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
	DummySMP obj(new Dummy); // 'obj' is a smart pointer
	obj.operator->()->F();
}

int main() {
	G();
	G();
	_CrtDumpMemoryLeaks();
}

/*
- Note DummySMP::GetObject is renamed to DummySMP::operator->.
*/
