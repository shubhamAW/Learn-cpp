int main() {
	int i = 1;
}

void f() {
	int i = 5;
}


/*
- Can two functions have local variables with same name?
- Yes. Both 'main' and 'f' can have local varibale with same name.
- Both 'i's are treated as different.
- Non-static local variables are located in stack frame.
*/
