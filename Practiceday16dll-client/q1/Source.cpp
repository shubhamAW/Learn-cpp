#include<iostream>
using namespace std;

#include "fact.h"

int main() {
	try {
		int num;
		cout << "enter a Number:"<<endl;
		cin >> num;
		Factorial fact;
		fact.factorial(num);
	}
	catch(Exception &e) {
		cout << e.GetErrorCode() << endl;
		cout << e.GetDescription() << endl;
		cout << e.GetFunctionName() << endl;
		cout << e.GetLineNo() << endl;
	}
}