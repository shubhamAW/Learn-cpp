#include <algorithm>

int f() {
	static int i = 0;
	i = i + 1;
	return i;
}

int g() {
	static int i = 0;
	i += 2;
	return i;
}

int main() {
	int a[3];
	std::generate(a, a + 3, f);
	std::generate(a, a + 3, g);
}