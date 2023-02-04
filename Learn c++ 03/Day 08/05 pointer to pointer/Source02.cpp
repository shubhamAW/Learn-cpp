void alloc(int** pn) {
	*pn = new int;
}

int main() {
	int* pa = nullptr;
	alloc(&pa);
	delete pa;
	pa = nullptr;
}
