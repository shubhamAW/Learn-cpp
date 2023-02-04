#include "Header.h"
#include<iostream>
using namespace std;

void get_statistic_data(int arr[], int size, int* min, int* max, int* sum, int* avg) {
	*min = INT_MAX;
	for (int i = 0;i < size;i++) {
		if (arr[i] < *min)
			*min = arr[i];
	}

	*max = INT_MIN;
	for (int i = 0;i < size;i++) {
		if (arr[i] > *max)
			*max = arr[i];
	}

	*sum = 0;
	for (int i = 0;i < size;i++) {
		*sum += arr[i];
	}

	*avg = (*sum) / size;


}