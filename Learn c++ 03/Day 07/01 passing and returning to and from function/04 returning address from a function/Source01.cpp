int g = 1;

int* f();

int main() {
	g = 5;
	int* pg = f(); // Before call int* pg = f();  and after call int* pg = t;
	*pg = 10;
}

int* /* t */ f() {
	return &g; // int* t = &g;
}

