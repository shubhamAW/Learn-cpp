int main() {
	int i = 1; 
}

void f() {
	i = 5; // attempting to access 'i' of 'main' is not possible.
}


/*
- The scope of local variable is limited to the block in which it is defined.
- 'i' is a local variable of 'main' hence its scope is limited to the 'main'.
- It cannot be accessed in any other function.
*/