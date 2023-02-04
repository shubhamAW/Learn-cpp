#include <iostream>
using namespace std;

#include"Header.h"

int main() {
    int n = 2, m = 3, p = 2;
    int** a = new int* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    int** b = new int* [m];
    for (int i = 0; i < m; i++) {
        b[i] = new int[p];
    }
    int** c = new int* [n];
    for (int i = 0; i < n; i++) {
        c[i] = new int[p];
    }
    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;
    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;
    b[0][0] = 7;
    b[0][1] = 8;
    b[1][0] = 9;
    b[1][1] = 10;
    b[2][0] = 11;
    b[2][1] = 12;
    multiplyMatrices(a, b, c, n, m, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    for (int i = 0; i < m; i++) {
        delete[] b[i];
    }
    delete[] b;
    for (int i = 0; i < n; i++) {
        delete[] c[i];
    }
    delete[] c;
    return 0;
}