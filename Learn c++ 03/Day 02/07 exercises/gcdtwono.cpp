//Write a program to calculate the Greatest Common Divisor(GCD) of two numbers.
//Sample Input :
//Input the first number : 25
//Input the second number : 15
//
//Sample Output :
//The Greatest Common Divisor is : 5 .

#include<iostream>
using namespace std;

int main() {
	int first_num, second_num;
	cout << "Enter First No: ";
	cin >> first_num;
	cout << "Enter Second No: ";
	cin >> second_num;

	int small_num = (first_num < second_num) ? first_num : second_num;

	int gcd = 1;
	for (int i = 2;i <= small_num;i++) {
		if (first_num % i == 0 && second_num % i == 0) {
			gcd = i;
		}
	}

	cout << gcd << endl;

}
