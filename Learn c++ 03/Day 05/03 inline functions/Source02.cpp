 inline int add(int u, int v);

int main() {
	int result = 0;
	result = 3 + 5; // inline
	result = add(1, 2); // not inline
}

 inline int add(int u, int v) {
	return u - v;
}


/*
- 'inline' is a C++ feature.
- C++ compiler replaces call by the definition of the inline function.
- Note inline is a request to the compiler.
- If compiler observes its not feasible to inline the definition then it keeps
  call to function as it is.
- If function is lengthy, virtual or recusive then compiler doesn't do inlining.
*/

