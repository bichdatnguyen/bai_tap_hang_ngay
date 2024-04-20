#include <iostream>
using namespace std;

struct Point
{
    int x, y;
};

void printLocationValue(Point p)
{
    cout << &p.x << " " << &p.y << endl;
}

void printLocationReference(Point &p)
{
    cout << &p.x << " " << &p.y << endl;
}

int main()
{
    Point p;
    cin >> p.x >> p.y;
    cout << &p.x << " " << &p.y << endl;
    // 0x61fe18 0x61fe1c
    printLocationValue(p);
    // 0x61fdf0 0x61fdf4
    printLocationReference(p);
    // 0x61fe18 0x61fe1c
    return 0;
}
