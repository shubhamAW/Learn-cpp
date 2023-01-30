#include "copy.h"

bool equal(int* arr_equal, int arr_len, int* b_equal, int b_len) {
	if (arr_len != b_len)
		return false;

	for (int i = 0;i < arr_len;i++) {
		if (arr_equal[i] != b_equal[i])
			return false;
	}

	return true;
}