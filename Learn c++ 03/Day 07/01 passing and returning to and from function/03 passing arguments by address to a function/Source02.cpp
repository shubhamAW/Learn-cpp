void swap(int* u, int* v);

int main() {
	int a = 1, b = 2;
	swap(&a, &b);
}

void swap(int* u, int* v) {
	int t = *u;
	*u = *v;
	*v = t;
}

/*
- Passing arguments by address to 'swap' function results
  into swapping of their values.
*/
