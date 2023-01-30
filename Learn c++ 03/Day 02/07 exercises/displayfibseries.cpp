//Write a program to display the first n terms of Fibonacci series.
//Sample Input :
//Input number of terms to display : 10
//
//Sample Output :
//Here is the Fibonacci series upto to 10 terms :
//	0 1 1 2 3 5 8 13 21 34


#include<iostream>
using namespace std;

int main() {
	int number = 0;
	cout <<"Enter a Number :";
	cin >> number;

	int first_init = 0;
	int second_init = 1;
	cout << "0 1 ";
	for (int i = 2;i < number;i++) {
		int result= first_init + second_init;
		cout << result <<" ";
		first_init = second_init;
		second_init = result;
		
	}


}