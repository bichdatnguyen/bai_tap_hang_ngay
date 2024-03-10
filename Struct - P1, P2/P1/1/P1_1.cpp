#include <iostream>
using namespace std;

struct Point
{
    int x, y;
};

void print(Point p)
{
    cout << p.x << " " << p.y << endl;
}

int main()
{
    Point p;
    p.x = 10;
    p.y = 12;
    print(p);
    return 0;
}
