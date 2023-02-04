#pragma once

#if defined(PRACTICEDAY08DLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif



//int EXPIMP get_add(int *a, int *b);
//
//double EXPIMP modf(double num, double* integer);

//void EXPIMP count_vowels(char* ch, int* count_a, int* count_e, int* count_i, int* count_o, int* count_u);

//void EXPIMP get_statistic_data(int arr[], int size,int *min, int *max, int *sum, int *avg);

void EXPIMP roots(double a, double b, double c, double& root1, double& root2);





