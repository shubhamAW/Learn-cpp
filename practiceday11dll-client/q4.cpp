#include<assert.h>
#include<iostream>
using namespace std;

/* Error -> assert(u.TopLeft().GetX() == 11 && u.TopLeft().GetY() == 11);
*  You need to changes in MoveToX(int x) & MoveToY(int y) -> In this functions.
*/

class Point {
private:
    int m_x, m_y;
public:
    Point(int x, int y) {
        m_x = x;
        m_y = y;
    }
public:
    int GetX() {
        return m_x;
    }
    int GetY() {
        return m_y;
    }
};

class Rectangle {
private:
    int m_top, m_left, m_bottom, m_right;
public:
    Rectangle(int top, int left, int bottom, int right) {
        m_top = top;
        m_left = left;
        m_bottom = bottom;
        m_right = right;
    }

public:
    Point CenterPoint() const {
        //CenterPoint of reactangleg
        int x = (m_left + m_right) / 2;
        int y = (m_top + m_bottom) / 2;

        return Point(x, y);

    }

    Rectangle Clone() const {
        return Rectangle(m_top, m_left, m_bottom, m_right);
    }

    void MoveToX(int x) {
        int delta = x - m_left;
        m_left += delta;
        m_right += delta;
    }

    void MoveToY(int y) {
        int delta = y - m_top;
        m_top += delta;
        m_bottom += delta;
    }

    Point TopLeft() const {
        return Point(m_left, m_top);
    }
};

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
