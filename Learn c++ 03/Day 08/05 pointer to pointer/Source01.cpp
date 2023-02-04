int main() {
	int a = 1;
	int* pa = &a;
	int** ppa = &pa;
	a = 5;
	*pa = 10;
	**ppa = 15;
}

/*
- 'ppa' is referred as pointer to pointer.
*/