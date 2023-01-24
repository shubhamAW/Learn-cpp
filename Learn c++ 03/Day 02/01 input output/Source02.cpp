#include <stdio.h>
#include <stdlib.h>

void main() {
	printf("Sum of 1 + 2 is 3");
	printf(" And Sum of 3 + 4 is 7");

	system("cls");

	printf("Sum of 1 + 2 is 3\n");
	printf("And Sum of 3 + 4 is 7");

	system("cls");

	printf("Sum of 1 + 2 is 3\a\n");
	printf("And Sum of 3 + 4 is 7");

	system("cls");

	printf("Sum of 1 + 2 is %d\n", 3);
	printf("Sum of %d + %d is %d\n", 4, 5, 9);
	printf("Sum of %d + %d is %d\n", 6, 5, 6 + 5);

	int u = 3, v = 5;
	printf("Sum of %d + %d is %d\n", u, v, u + v);

	int principal = 1000, period = 3;
	double roi = 6.5;
	printf("Principal: %d, Rate of Interst: %lf, Period: %d", principal, roi, period);
}

/*
What is \n?
* \n is a escape sequence character. Following is a list of escape sequence characters which can be used with printf.
  \a (bell), \b (backspace), \n (new line), \r (carrige return),   \f (form feed), \t (horizonta tab), \v (vertical tab),
  \(single quote ), \" (double quote "), \\ (back slash \)

What are formate specifier characters?
* Format specifer are also known as type conversion specifier characters.
* They are used by scanf and printf to interpret data type of the argument.
* Hence we use format specifier or type conversion specifier characters based upon the type of the constant or variable.
* Refer the following table for a list of format specifer commonly used along with the respective types.
  Type			Format Specifier
  int			%d
  char			%c
  wchar_t		%C
  float			%f
  double		%lf

  There are many more format specifiers. Plesae visit following link to know more about them.
  https://docs.microsoft.com/en-us/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=msvc-160
*/
