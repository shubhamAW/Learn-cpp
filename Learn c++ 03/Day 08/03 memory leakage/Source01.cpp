#include <crtdbg.h>

int main() {
	int* pn = new int;
	*pn = 1;
	delete pn;
	pn = nullptr;
	_CrtDumpMemoryLeaks();
}
