#include <crtdbg.h>

class Dummy {
public:
	void F();
};

void Dummy::F() {}

void G() {
	Dummy* px = new Dummy;
	px->F();
}

int main() {
	G();
	G();
	_CrtDumpMemoryLeaks();
}

/*
- Everytime 'G' is called, memory is leaked.
*/