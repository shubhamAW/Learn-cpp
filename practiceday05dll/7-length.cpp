#include "header.h"

int length(int n) {
	if (n < 1)
		return 0;
	return 1 + length(n / 10);
}