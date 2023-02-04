#pragma once

#if defined(PRACTICEDAY05DLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif

//int EXPIMP copy(int *a, int *b, int len);

//int EXPIMP search(int *a, int range1 , int range2, int range3 = 0);

int EXPIMP summation(int n);

int EXPIMP length(int n);

int EXPIMP fibonacci(int n);

bool EXPIMP palindrome(int n );

int EXPIMP findMax(int* arr, int n);

int EXPIMP dow(int day, int month, int year);

int EXPIMP sort(int* arr, size_t size, SortOrder sort_order = Ascending);



