//
//3. Write a program to calculate the distance between two points.Use the sqrt function to compute the square root of a number.
//Sample Input :
//Input x1 : 3
//Input y1 : 2
//Input x2 : 9
//Input y2 : 7
//
//Sample Output :
//Distance between two points is : 7.81024967591

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	//initialization.
	int x1 = 3, y1 = 2, x2 = 9, y2 = 7; 
	double distance = 0.0;

	//formula calculation.
	distance = sqrt(pow((x2-x1),2) + pow((y2 - y1), 2));

	//output
	cout << distance<<endl;
}