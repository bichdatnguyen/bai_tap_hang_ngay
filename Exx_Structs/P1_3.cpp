#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

Point mid_point(const Point a, const Point b)
{
    Point mid;
    mid.x = (a.x + b.x) / 2;
    mid.y = (a.y + b.y) / 2;
    return mid;
}

void print(Point p)
{
    cout << p.x << " " << p.y << endl;
}

int main()
{
   Point point1, point2;
   point1.x = 10;
   point1.y = 12;
   point2.x = 8;
   point2.y = 6;
   print(mid_point(point1, point2)); // 9 9
   return 0;
}
