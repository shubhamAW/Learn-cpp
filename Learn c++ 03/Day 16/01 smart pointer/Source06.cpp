#include <memory>
#include <crtdbg.h>
using namespace std;

class Dummy {
public:
	void F();
};

void Dummy::F() {}

void G() {
	shared_ptr<Dummy> u(new Dummy);
	u->F();

	shared_ptr<Dummy> v = u; // OK: 'u' can share ownership with 'v'.

	shared_ptr<Dummy> w;
	w = u;

	shared_ptr<Dummy> x;
	x.swap(u); // Its possible to transfer ownership from one shared_ptr object to another shared_ptr object
			   // Now w and v will be the two owners of the object

}

int main() {
	G();
	G();
	_CrtDumpMemoryLeaks();
}

/*
- shared_ptr owned object can be owned by two or more shared_ptr objects.
*/ 