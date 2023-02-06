#include <iostream>
using namespace std;

struct Circle {
	int m_radius;
};

int main() {
	Circle a = { 5 };
	Circle* pobj = &a;
	cout << pobj->m_radius << endl;

	Circle b = { 10 };
	pobj = &b;
	cout << pobj->m_radius << endl;
}