//Write a program to find the most occurring element in a given array of integers.
//Sample Input : -4 3 6 2 -3 -1 7 9 -3
//Sample Output : -3

#include <iostream>
#include <unordered_map>
using namespace std;

int most_frequent(int arr[], int n) {
    unordered_map<int, int> count;
    int max_count = 0;
    int result;
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
        if (count[arr[i]] > max_count) {
            max_count = count[arr[i]];
            result = arr[i];
        }
    }
    return result;

}

int main() {
    int arr[] = { -4 ,3 , 6 , 2 ,-3 ,-1 ,7 ,9 ,-3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The most frequent element is: " << most_frequent(arr, n) << endl;
    return 0;
}
