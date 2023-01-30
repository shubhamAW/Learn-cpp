#include "copy.h"

/*
*  arr_union= { 5, 10, 15, 20, 25 } 
   b_union ={ 10, 20, 30, 40, 50 }
   c_union ={ 5, 10 , 15 , 20 , 25 , 50 , 40 , 30}/?
*/

int set_union(int* arr_union, int arr_union_len, int *b_union, int b_union_len, int* c_union) {
	int i = 0;
	int j = b_union_len;

	int c_union_len = arr_union_len + b_union_len;
	for (int k = 0;k < c_union_len;k=k+2) {

		c_union[k] = arr_union[i];
		c_union[k + 1] = arr_union[j];
	}



	return arr_union_len + b_union_len;

}