int f() {
	// return 0; // can't skip this return statement
}

int main() {
	int n = f();
	return 0; // can skip this return statement
}

/*
* 'return' statement is not mandatory in main.
* If return statement is omitted then 0 is returned from main by default.
* 'return' statement is mandatory for function other than main if that function is declared with return trype other than void.
*/
