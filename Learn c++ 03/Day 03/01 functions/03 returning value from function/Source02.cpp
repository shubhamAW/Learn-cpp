#include <iostream>
using namespace std;

double RectArea(int x1, int y1, int x2 , int y2);

void main() {
	double area = RectArea(2,3,4,5);
}

/*
* though parameters name can be omitted, from the function declaration it is not recommended to do so.
* If omitted inteliSense doesn't show parameters row in such case InteliSense helps turns out to be less usefull
*/