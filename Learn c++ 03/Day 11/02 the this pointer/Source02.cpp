#include <iostream>
using namespace std;

struct Circle {
	int m_radius;
};

void Print(Circle* pobj) {
	cout << pobj->m_radius << endl;
}

int main() {
	Circle a = { 5 };
	Print(&a);

	Circle b = { 10 };
	Print(&b);
}