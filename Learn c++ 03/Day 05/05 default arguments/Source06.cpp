int add(int u = 0, int v);

int main() {
	int result = 0;
	result = add(1, 2);
	result = add(5);
}

int add(int u, int v) {
	return u + v;
}

/*
A function can have one or more optional parameters.
They should all appear after the mandatory parameters.

In case we wish to provide specific value to an optional parameter
which is far in the parameter list, then it is compulsory to give
arguments (though default) to all optional parameters in between.
*/