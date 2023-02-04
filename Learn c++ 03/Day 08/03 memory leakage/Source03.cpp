#include <crtdbg.h>

/* api Developer..
*/
int* CreateInt(int value);
void Relase(int* ptr);


int* CreateInt(int value) {
	int* pn = new int(value);
	return pn;
}

void Relase(int* ptr) {
	delete ptr;
	ptr = nullptr;
}

/* Application Developer*/

int main() {
	int* ptr = CreateInt(1);
	//Relase(ptr);
	ptr = CreateInt(5);
	//Relase(ptr);
	_CrtDumpMemoryLeaks();
}