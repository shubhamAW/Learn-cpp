#include "Header.h"
#include<assert.h>
#include<iostream>

int main() {
    Circle c={ 10 };
    double area = CalculateArea(c);
    assert(area == 314);
    std::cout << "Area of circle of radius " << c.radius<< " is " << area << std::endl;
}
