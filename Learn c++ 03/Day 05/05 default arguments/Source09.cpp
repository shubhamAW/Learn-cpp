int add(int u, int v = 0);  // This add take a mandatory and one optional argument.
int add(int u, int v, int w); //This add take a two mandatory and one optional argument.

int main() {
	int result = 0;
	result = add(2, 3);
}

int add(int u, int v) {
	return u + v;
}

int add(int u, int v, int w) {
	return u + v + w;
}