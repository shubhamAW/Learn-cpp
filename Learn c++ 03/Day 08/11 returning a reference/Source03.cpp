int g = 1;

int & f();

int main() {
	g = 5;
	int h = f();
	h = 10;
}

int & /* t */ f() {
	return g; // int& t = i;
}
