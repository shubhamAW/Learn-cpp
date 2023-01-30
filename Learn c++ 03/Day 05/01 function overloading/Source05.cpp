void f(int p) {}

void f(const int q) {}

int main() {
	int a = 1;
	const int b = 1;
	f(a);
	f(b);
}

void f(int p) {}

void f(const int q) {}

/*
- Results into error.
*/