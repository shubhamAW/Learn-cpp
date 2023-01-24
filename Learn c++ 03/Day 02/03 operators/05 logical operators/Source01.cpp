void main() {
	bool b = false;
	b = !false;
	b = !true;
	b = !(3 > 4);

	int u = 3;
	b = !(u < 4);

	int v = 4;
	b = !(v > u);
}

/*
int i = 5; i = !i; i = !i; will result into 1 or 5?
* No. It will set i to 1.
*/