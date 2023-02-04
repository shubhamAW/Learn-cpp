#include <malloc.h>

int main() {
	int* pn = (int*)malloc(sizeof(int));
	if (pn != NULL) {
		*pn = 1;
		free(pn);
		pn = NULL;
	}
}

/*
- 'malloc' is a function.
- It works in C as well as C++.
- Argument to 'malloc' is number of bytes to be allocated on heap.
- If a continous block of that many bytes exist in the heap then
  malloc reserves same and returns the base address of that block.
- If malloc fails to find such continuos block then it returns null.
- Allocation done using 'malloc' must be freed using 'free' function.
- Its a good practice to assign null to the freed pointer.
*/
