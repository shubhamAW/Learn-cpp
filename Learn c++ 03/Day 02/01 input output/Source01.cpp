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
	fflush(stdin);
	scanf_s(" %c", &c, 1);

	wchar_t wc = 0;
	printf("Enter yet another character: ");
	fflush(stdin);
	scanf_s(" %C", &wc, 1);

	printf("value of a is %d\n", a);
	printf("value of r is %f\n", r);
	printf("value of d is %lf\n", d);
	printf("value of c is %c\n", c);
	printf("value of wc is %C\n", wc);
}

/*
* %d, %f, %lf, %c, %C are called as format specifier.
* It implies to scanf, the type of the variable in which input is to be collected.
* For bool type, there is no format specifier available.
*/
