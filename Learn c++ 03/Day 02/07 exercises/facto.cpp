//Write a program to calculate the factorial of a number.
//Sample Input :
//Input a number to find the factorial : 5
//
//Sample output :
//The factorial of the given number is : 120

#include<iostream>
using namespace std;

int fact(int n) {
	if (n == 1) return 1;

	return n * fact(n - 1);
}

int main() {
	int number = 0;
	cout << "Enter a number: ";
	cin >> number;

	cout << fact(number);

}
