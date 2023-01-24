void main() {
	bool b = true;
	b = false && false; // result is false
	b = false && true;	// result is false
	b = true && false;	// result is false
	b = true && true;	// result is true

	int c = 3, d = 4, e = 0;
	b = c > e && c < d;
}

/*
How do we specify logical AND operator in C++?
* Using &&.

Is logical AND (&&) operator of C++ smart operator?
* The logical AND operator of C++ is a smart operator.
* If lhs expression evaluates to false then rhs expression is not evaluated at all.
*/

/*
Questions:
Does 0 < a < 10 syntax makes sense in C++?
* No.
*/
