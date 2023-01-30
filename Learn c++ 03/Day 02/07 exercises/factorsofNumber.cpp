//Write a program to print all factors of a given number.
//Sample Input :
//Input a number : 63
//
//Sample Output :
//The factors are : 1 3 7 9 21 63


#include<iostream>
using namespace std;

int main() {
	int number = 0;
	cout << "enter a Number: ";
	cin >> number;

	for (int i = 1;i <= number;i++) {
		if (number % i == 0) {
			cout << i<<" ";
		}
	}
}