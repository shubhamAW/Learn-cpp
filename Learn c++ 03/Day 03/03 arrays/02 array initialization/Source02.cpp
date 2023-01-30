#define N 3
#define R 2
#define C 3

int main() {
	int a[N] = { 1, 2, 3, 4 };
	int b[R][C] = { {1, 2, 3, 4}, { 5, 6, 7 } };
	int c[R][C] = { 1, 2, 3, 4, 5, 6, 7 };
}

/*
* If number of initializers are more than number of elements then it results into compilation error.
*/
