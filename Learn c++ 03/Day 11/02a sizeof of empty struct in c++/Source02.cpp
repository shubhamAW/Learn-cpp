#include<iostream>
using namespace std;

struct Dummy {};

int main() {
	Dummy dummy;
	cout<<sizeof(Dummy);
	cout<<sizeof(dummy);
}

/*
- Can c program have empty structure ? -> No (at least one memeber must be present in c structure)
- Can c++ program have a empty structure? -> yes 
- In such situation if we compute the size of structure what would be ? 1 byte ( in c++)
- The size of empty struct is 1 byte.
- Note this byte cannot be accessed.
- It is there to indicate presense of an object.
*/
