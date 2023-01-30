int main() {
	int a[] = { 1, 2, 5 };
	int * pa = &a[1];
	pa = pa + 1;
	pa = pa - 2;

	int * pb = ++pa;
	pb = pa++;
	pb = pa--;
	pb = --pa;

	pa = &a[0];
	pb = &a[2];
	int diff = pb - pa;

	int n = 0;
	pa = &a[1];
	n = ++*pa;
	n = *++pa;

	pa = &a[0];
	n = *pa++;
	n = (*pa)++;

	pa = &a[1];
	n = --*pa;
	n = *--pa;

	pa = &a[2];
	n = *pa--;
	n = (*pa)--;

	pa = &a[0];
	pa += 2;
	pa -= 1;
}

/*
The pa + 1 expression increments address
contained in pointer by four because,
pointer is pointing to 'int'. And size of
'int' is four.

Had pointer pointing to double the same
expression would have incremented pointer
by eight.
*/