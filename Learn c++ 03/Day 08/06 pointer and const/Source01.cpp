int main() {
	int u = 1;				// 1

	int* p = &u;			// 2

	u = u + 1;				// 3

	*p = *p + 1;			// 4

	int v = 2;				// 5

	p = &v;					// 6
}