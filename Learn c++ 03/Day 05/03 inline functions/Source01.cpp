int add(int u, int v);

int main() {
	int result = 0;
	result = 3 + 5; // expression is inline
	result = add(1, 2); // add is not inline
}

int add(int u, int v) {
	return u + v;
}
