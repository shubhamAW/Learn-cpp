#include"Header.h"
#include<iostream>

int main() {
    Triangle t;
    std::cout << "Input the lengths of three sides (a, b, c) of a triangle:" << std::endl;
    std::cout << "Input length of side a: " << std::flush;
    std::cin >> t.a.value;
    std::cout << "Input length of side b: " << std::flush;
    std::cin >> t.b.value;
    std::cout << "Input length of side c: " << std::flush;
    std::cin >> t.c.value;
    if (SidesFormTriangle(t)) {
        ComputeAnglesFromSides(t);
        std::cout << "Measure of Angle A is " << t.A.value << std::endl;
        std::cout << "Measure of Angle B is " << t.B.value << std::endl;
        std::cout << "Measure of Angle C is " << t.C.value << std::endl;
    }
    else {
        std::cout << "Given lengths of sides cannot form a triangle." << std::endl;
    }
}
