int main() {
	const int n = 3;
	int a[n]; // as good as int a[3]
}

/*
* A constant variable can be used to sepcify array dimension.
* Most compilers optimize above code.
* They replace constant variable with its value.
* Hence upon optimization, int a[n] is converted to int a[3].
*/ 
 