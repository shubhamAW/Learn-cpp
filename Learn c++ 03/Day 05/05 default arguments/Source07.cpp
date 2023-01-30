int add(int u, int v, int w = 2, int x = 1, int y = 5, int z = 3);

int main() {
	int result = 0;
	result = add(1, 2, , , , 4); // empty comma syntax to represent usage of default arguments at those place is not supported
	result = add(1, 2, 2, 1, 5, 4); // note since we want w, x and y to take default values, we have to mention default values manually
}

int add(int u, int v, int w, int x, int y, int z) {
	return u + v + w + x + y + z;
}

/*
* A function can have one or more optional parameters.
* They should all appear after the mandatory parameters.
*
* In case we wish to provide specific value to an optional parameter
  which is far in the parameter list, then it is compulsory to give
  arguments (though default) to all optional parameters in between.
*/