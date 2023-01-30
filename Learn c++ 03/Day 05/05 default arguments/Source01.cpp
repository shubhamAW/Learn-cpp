int add(int u, int v) {
	return u + v;
}

int main() {
	int result = 0;
	result = add(1, 2);
	result = add(5);
}

/*
- After parsing, above code, compiler realizes that
  add is a function and it takes two parameters of int type.
  Both parameters are mandatory parameters. Hence arguments to them are compulsory.
  In the 2nd call to add, second argument is missing hence compiler throws
  too few arguments error on that line.
*/