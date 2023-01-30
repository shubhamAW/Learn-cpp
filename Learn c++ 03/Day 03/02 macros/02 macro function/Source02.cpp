#define SWAP(U, V) U = U + V; \
V = U - V; \
U = U - V;


int main() {
	int i = 1, j = 2;
	SWAP(i, j);
	ADD(i, j);
}

/*
- To write multiline macro function, end every statement (except the last one) with \.
- The \ at the end of the statement removes new line effect.
- So for us, the view is of the macro is multiline but for compiler the view is as good as single line.
*/