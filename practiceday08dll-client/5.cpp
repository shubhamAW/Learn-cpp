#include "Header.h"

#include <iostream>
#include <cmath>

using namespace std;



int main() {
    double a[2][2] = { {2, 3}, {5, 1} };
    double b[2] = { -7, 9 };
    double x, y;

    determine_x_y(a, b, x, y);

   
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
}