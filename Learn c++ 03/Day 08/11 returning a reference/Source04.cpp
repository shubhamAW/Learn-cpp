int& f();

int main() {
	int& h = f();
	h = 10;
}

int& /* t */ f() {
	int g = 1;
	return g; // int & t = g;
}

/*
- Above program results into dangling reference 'h' in main.

Above program is a bad program because it is trying to return a
reference of a local non-static variable, which is released as
soon as control exits the function. This makes returned reference
dangling reference.

Remember, the lifetime of a reference should never be greater than
lifetime of a referent.
*/
