#include "copy.h"

int copy(int *a, int *b, int len) {
	
	for (int i = 0;i < len;i++) {
		a[i] = b[i];
	}

	return 0;
}