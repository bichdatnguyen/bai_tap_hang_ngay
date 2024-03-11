#include <iostream>
using namespace std;

struct Point
{
    double x, y;
};

Point mid_point(const Point p1, const Point p2)
{
    Point m;
    m.x = (p1.x + p2.x) / 2;
    m.y = (p1.y + p2.y) / 2;
    return m;
}

int main()
{
    Point p1, p2;
    p1.x = 10;
    p2.y = 12;
    p2.x = 11;
    p2.y = 15;
    Point m = mid_point(p1, p2);
    cout << "(" << m.x << ", " << m.y << ")" << endl;
    return 0;
}
