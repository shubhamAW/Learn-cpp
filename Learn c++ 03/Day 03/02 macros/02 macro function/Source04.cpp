#include "macros.h"

void main() {
	int i = 1, j = 2, k = 0;
	k = MIN(++i, ++j); // k = ++i < ++j ? ++i : ++j;
}

/*
* Pitfall of macro function.
* When expression is passed as argument to the the macro function,
* preprocessor substitute the expression in its code and not
* the result of the expression. This is the pitfall of the macro function.
*/