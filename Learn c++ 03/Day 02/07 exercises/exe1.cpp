//1. Write a program to convert speed given in kilometers per hour to miles per hour.
//Sample Input :
//Input speed in Km / hr : 60
//
//Sample Output :
//Speed in miles per hour is : 37.2823

#include<iostream>
using namespace std;

int main() {
	int speed_km;
	double speed_mile;
	cout << "enter a speed in km"<<endl;
	cin >> speed_km;
	speed_mile = 0.621 * speed_km;
	cout << speed_mile;
}