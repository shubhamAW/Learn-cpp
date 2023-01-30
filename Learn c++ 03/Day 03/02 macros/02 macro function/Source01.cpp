#define MIN(U, V) (U < V ? U : V) // MIN is a macro function

int main() {
	int i = 1, j = 2, k = 0;
	k = MIN(i, j); // preprocessor changes k = MIN(i, j) to k = (i < j ? i : j);
}

/*
* When program is compiled, preprocessor replaces macro function with its corresponding code.
* Many leading frameworks use macro functions for code substitution. For ex. ATL, MFC, CAA etc.
*/
