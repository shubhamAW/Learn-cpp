void f();
int g(int n);
void k();

int main() {
	void (*fptr)() = f;
	f(); // direct call to 'f'
	fptr(); // indirect call to 'f'

	int (*gptr)(int) = g;
	g(1); // direct call to 'g'
	gptr(5); // indirect call to 'g'

	k(); // direct call to 'k'
	fptr = k;
	fptr(); // indirect call to 'k'
}

void f() {}

int g(int n) {
	return n;
}

void k() {}