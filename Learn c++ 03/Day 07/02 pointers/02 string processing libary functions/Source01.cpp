/* strlen example */
#include <stdio.h>
#include <string.h>

int main() {
	const size_t size = 256;
	char szInput[size];
	printf("Enter a sentence: ");
	gets_s(szInput, size);
	printf("The sentence entered is %u characters long.\n", strlen(szInput));
}