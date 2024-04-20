#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

void change(Point p)
{
    p.x = 9;
    p.y = 10;
}

void changePoint(Point &p)
{
    p.x = 9;
    p.y = 10;
}

void print(Point p)
{
    cout << p.x << " " << p.y << endl;
}

int main()
{
   Point point;
   point.x = 10;
   point.y = 12;
   print(point); // 10 12
   change(point);
   print(point); // 10 12
   changePoint(point);
   print(point); // 9 10
   return 0;
}
