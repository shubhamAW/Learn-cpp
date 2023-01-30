//Write a program to check if a given number is prime or not.
//Sample Input :
//Input a number to check prime or not: 13
//
//Sample Output :
//The entered number is a prime number.

#include<iostream>
using namespace std;

bool IsPrime(int number) {
	if (number == 1) return true;

	for (int i = 2;i < number;i++) {
		if (number % i == 0)
			return false;
	}
	return true;
}
int main() {
	int number = 0;
	cout << "Enter a Number: ";
	cin >> number;
	
	bool answer= IsPrime(number);
	answer ? cout << "number is prime" : cout << "number is not prime";

}