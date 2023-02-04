void swap(int &u, int &v);

int main() {
	int a = 1, b = 2;
	swap(a, b);
}

void swap(int &u, int &v) {
	int t = u;
	u = v;
	v = t;
}
