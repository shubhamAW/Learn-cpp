#define N 3
#define R 2
#define C 3

int main() {
	int a[N] = { 1 };
	int b[R][C] = { { 1, 2 },{ 5, 6, 7 } };
	int c[R][C] = { 1, 2, 5, 6, 7 };
}

/*
* If number of initializers are less than number of elements then it doesn't result into compilation error.
* Elements for which initializers are missing are set to zero.
*/
