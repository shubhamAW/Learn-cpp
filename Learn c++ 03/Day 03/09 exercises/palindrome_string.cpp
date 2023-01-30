//Write a program to check if a given string is a Palindrome or not.
//Sample Input : Racecar
//Sample Output : True

// Executed Successfully :) 

#include<iostream>
using namespace std;

int main() {
	string str;
	cin >> str;

	int right = str.size() - 1;
	int left = 0;

	bool is_palindrome = true;

	while (left < right) {
		if (str[left] != str[right]) {
			is_palindrome = false;
			break;
		}
		left++;
		right--;
	}

	if (is_palindrome) {
		cout << "is palindrome";
	}
	else {
		cout << "is not palindrome";
	}
}