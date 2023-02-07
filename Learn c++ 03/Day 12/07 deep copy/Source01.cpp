#include <assert.h>
#include "Integer.h"

int main() {
	Integer a = 5;
	Integer b = a;
	assert(a.Get() == b.Get());

	Integer c(10);
	b = c;
	assert(b.Get() == c.Get());
}

/*
- If class contains pointer member then it is strongly recommened to have
  deep copy implementation of copy constructor and copy assignment operator.
- Note assignment operator has to be implemented as a member function.
  Global function format for assignment operator is NOT SUPPORTED.
- Copy constructor, assignment operator and destructor forms trio.
- What it means is? if we implement one of them, mostly we need implementation other two.
- Remember copy constructor, assignment operator and destructor always exists in the class whether we write or not.
*/
