#include <iostream>
using namespace std;

int main() {
	int i = 1;
	int j = i;
	i++;
	j += 2;
	cout << "&i = " << &i << endl;
	cout << "&j = " << &j << endl;
}

/*
- Though 'j' is initialized with the value of 'i',
  they two are independent variables.
- Changes made to 'i' doesn't affect 'j' and vice versa.
- The evidence of 'i' and 'j' being two independent variables
  is that their addresses are distinct.
		+------+				+------+
		|	   |		        |      |
	  i	|	2  |		      j |  3   |
		|	   |		        |      |
		+------+				+------+
*/