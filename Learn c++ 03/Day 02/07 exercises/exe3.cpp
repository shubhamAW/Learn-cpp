//3. Write a program in C++ to calculate effective resistance of 3 resistors connected in parallel configuration.
//Sample Input :
//Input Resistance 1 : 2
//Input Resistance 2 : 5
//Input Resistance 3 : 10
//
//Sample Output :
//Total Effective Resistance is 1.25 ohms.

#include<iostream>
using namespace std;

int main() {
	 double a = 2.0 , b = 5.0 , c = 10.0 ;
	 float result = 1/(1 / a + 1 / b + 1 / c);
	cout << result;
}