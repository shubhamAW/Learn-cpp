#include <assert.h>
#include "Integer.h"

int main() {
	Integer a(1);
	Integer b = a;
	assert(a.Get() == b.Get());
}

/*
- Copy constructor always exist in the class.
- Compiler supplied copy constructor do byte by byte copy.
*/
