#include "Header.h"

void count_vowels(char *ch, int *count_a, int *count_e, int *count_i,int *count_o,int *count_u) {
	int i = 0;

	while (ch[i] != '\0') {
		if (ch[i] == 'a' || ch[i] == 'A')
			(*count_a)++;
		else if (ch[i] == 'e' || ch[i] == 'E')
			(*count_e)++;
		else if (ch[i] == 'i' || ch[i] == 'I')
			(*count_i)++;
		else if (ch[i] == 'o' || ch[i] == 'O')
			(*count_o)++;
		else if (ch[i] == 'u' || ch[i] == 'U')
			(*count_u)++;

		i++;
	}
}