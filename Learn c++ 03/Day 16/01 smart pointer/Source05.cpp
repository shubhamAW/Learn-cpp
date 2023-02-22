#include <memory>
#include <crtdbg.h>
using namespace std;

class Dummy {
public:
	void F();
};

void Dummy::F() {}

void G() {
	unique_ptr<Dummy> u(new Dummy);
	u->F();

	//unique_ptr<Dummy> v = u; // Error: unique_ptr owned object cannot be owned by two or more unique_ptr objects

	//unique_ptr<Dummy> w;
	//w = u; // Error: unique_ptr owned object cannot be owned by two or more unique_ptr objects

	unique_ptr<Dummy> x;
	x.swap(u); // Its possible to transfer ownership from one unique_ptr object to another unique_ptr object
}

int main() {
	G();
	G();
	_CrtDumpMemoryLeaks();
}

/*
- Introduction to unique_ptr.
- unique_ptr object claims exclusive ownership over the dynamically allocated object
  given to it for its life management.
*/