//Write a program that rearranges all negative integers before all positive integers in a given array of mixed positiveand negative integers.
//Sample Input : -4 3 6 2 - 3 - 1 7 9
//Sample Output : -4 - 3 - 1 3 6 2 7 9

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	cout << "Enter a Element of Array: ";
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}

	//logic 
	for (int k = 0;k < n;k++) {
		int i = 0, j = 1;
		while (j < n) {
			if (arr[j] < 0 && arr[i] >= 0) {
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
			i++;
			j++;
		}
	}


	// output 
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
}