//Write a program to find the sum of digits of a given number.
//Sample Input :
//Input a number : 1234
//
//Sample Output :
//The sum of digits of 1234 is : 10

#include<iostream>
using namespace std;

int main() {
	int number = 0;
	cin >> number;

	int sum = 0;

	while (number) {
		int digit = number % 10;
		number /= 10;
		sum += digit;
	}
	cout << sum << endl;
}
