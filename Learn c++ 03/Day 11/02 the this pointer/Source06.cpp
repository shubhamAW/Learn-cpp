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
	a.Print();

	Circle b = { 10 };
	b.Print();
}

/*
* - Note -> the this pointer is implicitly added by c++ compiler. hence we can ommit Mentioning it explicitly
- From C++ compiler point of view cout<<m_radius<<endl;statement equivalent to cout<<this->m_radius<<endl;

*/