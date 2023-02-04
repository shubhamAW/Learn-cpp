#include <malloc.h>

int main() {
	int count = 5;
	int* pn = (int*)malloc(sizeof(int) * count);
	if (pn != NULL) {
		for (int i = 0; i < count; i++)
			pn[i] = i;

		for (int i = 0; i < count; i++)
			*(pn + i) = 2 * i;
	}
	free(pn);
	pn = NULL;
}

/*
- Array allocated using malloc is known as dynamic array.\
- Use `pn,5` expression in watch window to see contents of all 5 elements.
- Note by default in Locals window, Pn shows Contents of 1st element.
*/