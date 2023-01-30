//Write a program that reverses a stringand prints it on the screen.
//Sample Input : Hello, World
//Sample Output : dlroW, olleH

//Executed successfully :)

#include<iostream>
using namespace std;

int main() {
	string s;
	cout << "enter a String: ";
	cin >> s;

	int size = s.size();

	int left = 0;
	int right = size - 1;
	while (left < right) {
		char t = s[right];
		s[right] = s[left];
		s[left] = t;

		left++;
		right--;
	}

	// reverse string..
	for (int i = 0;i < s.size();i++) {
		cout << s[i];
	}

}