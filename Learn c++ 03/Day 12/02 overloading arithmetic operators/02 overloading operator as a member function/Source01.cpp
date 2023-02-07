#include <assert.h>
#include "Integer.h"

int main() {
	Integer u(5), v(10), w;
	w = u + v; // w = u + v; executed as w = u.operator+(v);
}

/*
Operator overloading is a feature of c++. With this feature, we can provide 
implementation for execution of respective operation in the context of
our objects.

Operator overloading doesn't permit changes to operator precedence table.
Hence we cannot add new operators i.e. we can overload existing operators
only. There are few operators such as ::, ., sizeof, typeid, ?: which cannot
be overloaded. Most of the operators can be implemented either in member
function format or global function format. There are few operators
however for ex. (), [], (casting) etc. have to be implemented in member
function format only. Wherever global function format is supported, it's 
recommended to use global function format.
*/