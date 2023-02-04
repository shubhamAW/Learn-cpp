/* strcpy example */
#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];
	strcpy_s(str2, 40, str1);
	strcpy_s(str3, 40, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	printf("length:%u %u %u",strlen(str1),strlen(str2),strlen(str3));
}