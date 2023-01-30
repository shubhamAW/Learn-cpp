#include "header.h"

int summation(int n) {
	if (n < 1) return 0;
	return n % 10 + summation(n / 10);
}