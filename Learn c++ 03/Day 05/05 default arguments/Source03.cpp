int add(int u, int v);

int main() {
	int result = 0;
	result = add(1, 2);
	result = add(5);
}

int add(int u, int v = 0) {
	return u + v;
}

/*
- Though the default argument is mentioned in the definition
  still we see compiler is giving error.
- This is because, compiler compiles code top to bottom.
- Compiler learns from the prototype that both 'u' and 'v'
  are mandatory parameters, so when it sees call to add
  with single argument it realizes the break in the add function protocol
  hence it throws error.
*/
