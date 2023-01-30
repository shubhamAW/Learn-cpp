//2. Write a program to convert the temperature given in Celsius to Fahrenheit.
//Sample Input :
//Input temperature in Celsius : 37.5
//
//Sample Output :
//Temperature in Fahrenheit is : 99.5

#include<iostream>
using namespace std;

int main() {
	//initialization
	double temp_cel = 0.0;
	double temp_fahre = 0.0;

	//taking input from user.
	cout << "enter a temperature in celsius"<<endl;
	cin >> temp_cel;

	//formula calc.
	temp_fahre = (temp_cel * 1.8) + 32;

	//output.
	cout << temp_fahre;
}