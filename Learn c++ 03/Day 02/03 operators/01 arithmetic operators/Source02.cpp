void main() {
	int a = 0, b = 0, q = 0, r = 0;

	a = 5;
	b = 3;
	q = a / b; // 1
	r = a % b; // 2

	a = -5;
	b = 3;
	q = a / b; // -1
	r = a % b; // -2

	a = 5;
	b = -3;
	q = a / b; // -1
	r = a % b; // 2

	a = -5;
	b = -3;
	q = a / b; // 1
	r = a % b; // -2
}