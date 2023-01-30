//Write a program to find the second largest element in a given array of integers.
//Sample Input : -4 3 6 2 - 3 - 1 7 9
//Sample Output : 7

// Executed Successfully :)

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	int second_largest = 0;
	int largest = arr[0];

	for (int i = 1;i < n;i++) {
		if (arr[i] > largest) {
			second_largest = largest;
			largest = arr[i];
		}
	}

	cout << second_largest;

}