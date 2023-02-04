/* strcat example */
#include <stdio.h>
#include <string.h>

int main() {
	const size_t size = 80;
	char str[size] = { 0 };
	strcpy_s(str, size, "these ");
	strcat_s(str, size, "strings ");
	strcat_s(str, size, "are ");
	strcat_s(str, size, "concatenated.");
	puts(str);

}