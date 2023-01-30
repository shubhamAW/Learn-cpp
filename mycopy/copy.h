#pragma once

#if defined(MYDLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif


int EXPIMP copy(int *a, int *b, int len);

int EXPIMP replace(int *arr, int len_replace, int oldvalue,int newvalue);


int EXPIMP sort(int *arr_sort, int len_sort);

void swap(int* xp, int* yp);

int EXPIMP set_union(int *arr_union, int arr_union_len, int *b_union, int b_union_len, int *ac_union);

bool EXPIMP equal(int* arr_equal, int arr_len, int* b_equal, int b_len);