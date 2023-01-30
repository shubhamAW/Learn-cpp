//Write a program in C++ to find LCM of any two numbers using HCF.
//Sample Input :
//Input 1st number for LCM : 15
//Input 2nd number for LCM : 25
//
//Sample Output :
//The LCM of 15 and 25 is : 75

#include<iostream>
using namespace std;

int find_hcf(int first_num, int second_num , int small_num) {

	

	int hcf = 1;
	for (int i = 2;i <= small_num;i++) {
		if (first_num % i == 0 && second_num % i == 0) {
			hcf = i;
		}
	}
	return hcf;
}

int main() {
	int first_num, second_num;
	cout << "enter a first Number: ";
	cin >> first_num;
	cout << "Enter a Second Number: ";
	cin >> second_num;
	int small_num = (first_num < second_num) ? first_num : second_num;
	int HCF = find_hcf(first_num, second_num , small_num);

	int LCM = small_num * HCF;
	cout << LCM<<endl;


}