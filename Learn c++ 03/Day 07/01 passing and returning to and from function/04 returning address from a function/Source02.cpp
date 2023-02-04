int* f();

int main() {
	int* pg = f(); // int* pg = t;
	*pg = 10;
}

int* /* t */  f() {
	int g = 1;
	return &g; // int* t = &g;
}

/*
- Donot return address of a local non-static variable.
*/