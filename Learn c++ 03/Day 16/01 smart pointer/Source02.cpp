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
	Dummy* GetObject();
private:
	Dummy* m_pobj;
};

DummySMP::DummySMP(Dummy* pobj) : m_pobj(pobj) {}

DummySMP::~DummySMP() {
	delete m_pobj;
	m_pobj = nullptr;
}

Dummy* DummySMP::GetObject() { return m_pobj;  }

void G() {
	DummySMP dummySMP(new Dummy);
	dummySMP.GetObject()->F();
}

int main() {
	G();
	G();
	_CrtDumpMemoryLeaks();
}
