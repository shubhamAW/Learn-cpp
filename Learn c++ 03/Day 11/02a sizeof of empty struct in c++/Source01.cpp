#include <iostream>
using namespace std;

struct Circle {
	int m_radius;

	void Print() {
		cout << m_radius << endl;
	}
};

int main() {
	Circle a = { 5 };
	cout<<sizeof(Circle)<<endl;
	cout<<sizeof(a)<<endl;
}

/*
* -Object space contains only data members. That is it 
 doesn't contains member function defination.
 - That's why size of circle is 4 byte.
* -Member functions are stored in code segment.
*/

/*


- The 'this' is a keyword in c++ language.

- It exists in non-static member functions.

- It doesn't exist in global or static member functions.

- It is set automatically to the address of an object on which the member function is called.

- The usage of the 'this' pointer is optional, in order to access members of a structure.

- Logically we say, the 'this' pointer is first parameter of a non-static member function.

- It is also a constant pointer.
*/