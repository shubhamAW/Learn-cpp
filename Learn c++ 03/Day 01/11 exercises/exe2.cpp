//2. Write a program to compute the volume of a sphere.
//Sample Input :
//Input radius of the sphere : 5.4
//
//Sample Output :
//Volume of a sphere is : 659.58

#include<iostream>
using namespace std;

int main() {
	//initialization
	float radius = 5.4;

	//formula calculation
	float volume_sphere = (4.0f/3.0f) * (3.14) * radius * radius * radius;

	//output..
	cout << volume_sphere;
}