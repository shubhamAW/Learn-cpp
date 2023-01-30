long factorial(int n) {
	if (n < 0)
		return -1;

	if (n > 10)
		return -2;

	int result = 1;
	for (int i = n; i > 0; i--)
		result *= i;
	return result;
}

int main() {
	int result = 0;
	result = factorial(4);
	result = factorial(-4);
	result = factorial(40);
}

// It is a iterative way of computing factorial.