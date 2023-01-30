long factorial(int n);

int main() {
	int result = 0;
	result = factorial(3);
}

long factorial(int n) {
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}

/*
- A function calling itself is called a recursive function.
- Too deep recursion may result into stack overflow error.
*/