#include <stdio.h>

void main() {
	int a = 0;
	printf("Enter an integer: ");
	scanf_s("%d", &a);

	float r = 0.0f;
	printf("Enter a decimal number: ");
	scanf_s("%f", &r);

	double d = 0.0;
	printf("Enter yet another decimal number: ");
	scanf_s("%lf", &d);

	char c = 0;
	printf("Enter a character: ");
	scanf_s(" %c", &c, 1);

	wchar_t wc = 0;
	printf("Enter yet another character: ");
	scanf_s(" %C", &wc, 1);
}

/*
Can we define variable anywhere within scope before using it?
- Yes.

In C++, Is it mandatory to define all variables needed in the function at the beginning of the function?
- No such constrain.
- Variable can be defined anywhere within the scope.
- The definition, however should appear before using it.
*/
