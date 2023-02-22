#include <iostream>
using namespace std;

class Integer {
public:
	Integer(int i = 0);
private:
	int m_i;
	friend int main();
};

Integer::Integer(int i) : m_i(i) {}

int main() {
	Integer u(10);
	cout << u.m_i << endl;
	cout << u << endl;
}

/*
- Friend function gets privilege to access private members directly.
- Donot use friend functions.
*/