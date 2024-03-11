#include <iostream>
using namespace std;

struct Point
{
    int x, y;
};

void initByValue(Point p)
{
    p.x = 1;
    p.y = 1;
}

void initByReference(Point &p)
{
    p.x = 1;
    p.y = 1;
}

int main()
{
    Point p;
    p.x = 10;
    p.y = 12;
    initByValue(p);
    cout << "(" << p.x << ", " << p.y << ")" << endl; // (x, y) = (10, 12)
    initByReference(p);
    cout << "(" << p.x << ", " << p.y << ")" << endl; // (x, y) = (1, 1)
    return 0;
}
