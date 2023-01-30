//Write a program to calculate the sum of the firstand last digit of a number.
//Sample Input :
//Input any number : 12345
//
//Sample Output :
//The first digit of 12345 is : 1
//The last digit of 12345 is : 5
//The sum of first and last digit of 12345 is : 6


#include<iostream>
using namespace std;

int main() {
	int number;
	cout << "Enter a number : ";
	cin >> number;
	int last_num = number % 10;
	while (number > 10) {
		number = number / 10;
	}
	int result = last_num + number;
	cout << result;
}