#include "header.h"

int rev(int n, int temp) {
	if (n == 0)
		return temp;

	temp = (temp * 10) + (n % 10);

	return rev(n / 10, temp);
}

bool palindrome(int n ) {
	int temp = rev(n, 0);

	if (temp == n)
		return true;
	else
		return false;
}