#include<iostream>
using namespace std;


//Write a program to calculate the third angle of a triangle if two angles are given.
//Sample Input :
//Input first angle : 60
//Input second angle : 30
//Sample Output :
//Third angle is : 90

//int main() {
//	int first_angle = 60;
//	int second_angle = 30;
//	int third_angle = 180 - (first_angle + second_angle);
//
//}

// --------------------------------------------------------------------------------------

//Write a program to calculate the sum of first n natural integers. (Hint: use formula to calculate sum of first n natural numbers)
//Sample Input :
//Input n : 5
//Sum of first 5 natural numbers is : 15

// code 
//int main() {
//	int n = 5;
//	int sum = n * (n + 1) / 2;
//}

//--------------------------------------------------------------------------------------------------

//
//Write a program in C++ to calculate the sum of an A.P.series.
//Sample Input :
//Input the starting number of the A.P.series : 1
//Input the number of items for the A.P.series : 8
//Input the common difference of A.P.series : 5
//Sample Output :
//The Sum of the A.P.series is : 148

int main() {
	int a = 1, n = 8, d = 5;
	int sum = (n / 2) * (2 * a + (n - 1) * d);
	cout << sum;
}


// --------------------------------------------------------------------------------------------------

//Write a program in C++ to calculate final velocity at time T given initial velocityand acceleration.
//Sample Input :
//Input Initial Velocity : 30
//Input Acceleration : 8
//Input Time : 10
//Sample Output :
//Final Velocity is 110 m / s

//int main() {
//	int u = 30;
//	int a = 8, T = 10;
//	int v = u + a * T;
//}




