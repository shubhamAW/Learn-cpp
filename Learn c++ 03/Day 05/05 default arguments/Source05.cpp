int add(int u, int v = 0);

int main() {
	int result = 0;
	result = add(1, 2);
	result = add(5);
}

int add(int u, int v) {
	return u + v;
}

/*
A default argument is a value provided in function declaration 
that is automatically assigned by the compiler to the parameter
if in case caller doesn't provide an argument for the respective
parameter.

A default argument makes parameter as optional parameter. When
default argument is not mentioned, the parameter is mandatory
parameter. A mandatory parameter must be assigned an argument in the
function call.

A default argument must be set in the function prototype/declaration.

A redifinition error would happen if default argument is assigned
both in function declaraction and definition.
*/