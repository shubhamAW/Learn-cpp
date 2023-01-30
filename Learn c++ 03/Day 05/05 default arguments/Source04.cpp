int add(int u, int v = 0);

int main() {
	int result = 0;
	result = add(1, 2);
	result = add(5);
}

int add(int u, int v = 0) {
	return u + v;
}

/*
- Default argument cannot be mentioned in function decalaration and
  function definition at the same time.
*/
