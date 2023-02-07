#include <assert.h>
#include "Integer.h"

int main() {
	Integer u(5), v(10), w;
	w = u + v;
}

/*
- Compiler fails to evaluate w = u + v, because u, v, w are objects of Integer.
- Integer is a UDT (user defined type).
- Compiler knows nothing about which member of u is to be added with
  which member of v and assign result to which member of w.
- Because of this, compiler throws error on u + v expression.
*/
