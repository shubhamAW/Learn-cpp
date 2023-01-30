#include "copy.h"


int sort(int *arr_sort, int len_sort) {
	int i, j;
	for (i = 0;i < len_sort;i++) {
		for (j = 0;j < len_sort - i - 1;j++) {
			if (arr_sort[j] > arr_sort[j + 1])
				swap(&arr_sort[j], &arr_sort[j + 1]);
		}
	}
	return 0;

}