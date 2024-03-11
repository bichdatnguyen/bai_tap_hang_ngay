#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Point
{
    double x, y;
    Point(double _x, double _y)
    {
        x = _x;
        y = _y;
    }
};

struct Rect
{
    double x, y, w, h;
    Rect(double _x, double _y, double _w, double _h)
    {
        x = _x;
        y = _y;
        w = _w;
        h = _h;
    }
    bool contains(const Point p)
    {
        if((p.x < x) || (p.x > (x+w)) || (p.y < y-h) || p.y > y) return false;
        return true;
    }
};

int main() {
    Rect rectangle(0, 5, 7, 3);
    Point p1(3, 4);
    Point p2(10, 5);
    cout << (rectangle.contains(p1) ? "YES" : "NO") << endl; // YES
    cout << (rectangle.contains(p2) ? "YES" : "NO") << endl; // NO
    return 0;
}
