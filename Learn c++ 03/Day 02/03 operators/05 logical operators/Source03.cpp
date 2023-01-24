void main() {
	bool a = true;
	a = false || false;
	a = false || true;
	a = true || false;
	a = true || true;

	int c = 3, d = 4, e = 0;
	a = c > e || c < d;
}

/*
How do we specify logical OR operator in C++?
* Using ||.

Is logical OR (||) operator of C++ smart operator?
* The logical OR operator of C++ is a smart operator.
* If lhs expression evaluates to true then rhs expression is not evaluated at all.
*/