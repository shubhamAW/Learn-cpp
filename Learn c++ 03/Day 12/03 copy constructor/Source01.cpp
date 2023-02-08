#include <assert.h>
#include "Integer.h"

int main() {
	Integer a(1); //Do step into here and check which constructor is called?
	Integer b = a; //Do step into the here and check which constructor called?
	assert(a.Get() == b.Get());
}

/*
- Copy constructor always exist in the class.
- Compiler supplied copy constructor do byte by byte copy.
*/
