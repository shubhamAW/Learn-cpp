#include "copy.h"

int replace(int* arr, int len_replace, int oldvalue, int newvalue) {
	for (int i = 0;i < len_replace ;i++) {
		if (arr[i] == oldvalue) {
			arr[i] = newvalue;
		}
	}

	return 0;
}