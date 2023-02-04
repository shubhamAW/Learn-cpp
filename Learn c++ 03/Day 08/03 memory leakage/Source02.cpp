#include <crtdbg.h>

int main() {
	int* pn = new int;
	*pn = 1;
	pn = nullptr;

	pn = new int;
	*pn = 2;
	delete pn;
	pn = nullptr;

	_CrtDumpMemoryLeaks();
}
