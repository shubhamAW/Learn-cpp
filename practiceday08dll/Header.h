#pragma once

#if defined(PRACTICEDAY07DLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif



//int EXPIMP get_add(int *a, int *b);

int EXPIMP get_large(int* u, int* v);

void EXPIMP show_array(int* p, int size);

void EXPIMP total_capacitance(double c1, double c2, double& cs, double& cp);

void EXPIMP convert(int& hh, int& mm, int& ss);

void EXPIMP ucm(double m, double r, double omega, double& f, double& v);

void EXPIMP cartesian_to_polar(double x, double y, double& r, double& theta);

void EXPIMP determine_x_y(double a[2][2], double b[2], double& x, double& y);

char* EXPIMP appendString(const char* str1, const char* str2);

void EXPIMP multiplyMatrices(int** a, int** b, int** c, int n, int m, int p);