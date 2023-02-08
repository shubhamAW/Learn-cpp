#include<assert.h>

#include "Rectangle.h"

int main() {
    int top = 10;
    int left = 10;
    int bottom = 16;
    int right = 40;
    const Rectangle r(top, left, bottom, right);

    // Following test case checks
    // - Rectangle's CenterPoint member function.

    Point centerPoint = r.CenterPoint();
    assert(centerPoint.GetX() == Point(25, 13).GetX() &&
        centerPoint.GetY() == Point(25, 13).GetY());

    // Following test case checks
    // - Rectangle's Clone member function.
    Rectangle u = r.Clone();
    assert(u.TopLeft().GetX() == r.TopLeft().GetX() &&
        u.TopLeft().GetY() == r.TopLeft().GetY());

    // Following test case checks
    // - Rectangle's MoveToX and MoveToY member functions.
    u.MoveToX(11);
    u.MoveToY(9);
    assert(u.TopLeft().GetX() == 11 && u.TopLeft().GetY() == 11);
}