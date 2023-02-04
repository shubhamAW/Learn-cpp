#include "header.h"
#include<iostream>

extern enum SortOrder { Ascending, Descending };

void swap(int* u, int* v) {
	int temp = *u;
	*u = *v;
	*v = temp;
}

int sort_ascending(int* arr, size_t size) {
	for (int i = 0;i < size;i++) {
		for (int j = i+1;j < size;j++) {
			if (arr[i] > arr[j]) {
				swap(&arr[i], &arr[j]);
			}
		}
	}

	return 0;
}

int sort_descending(int* arr, size_t size) {
	for (int i = 0;i < size;i++) {
		for (int j = 0;j < size;j++)
			if (arr[i] < arr[j]) {
				swap(&arr[i], &arr[j]);
			}
	}
	return 0;
		
}

int sort(int* arr, size_t size, SortOrder sort_order ) {
	switch (sort_order) {
	case 0:
		sort_ascending(arr, size);
		break;
	case 1:
		sort_descending(arr, size);
		break;
	}
	return 0;
}