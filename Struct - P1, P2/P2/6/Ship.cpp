#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

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
};

struct Ship
{
    Rect shipSize;
    string id;
    double dx, dy;

    void Move()
    {
        shipSize.x += dx;
        shipSize.y += dy;
    }
};

void display(const Ship& ship)
{
    cout << "Serial number of the ship: " << ship.id << endl;
    cout << "Coordinate of the ship: (" << ship.shipSize.x << ", " << ship.shipSize.y << ", " <<
                                            ship.shipSize.w << ", " << ship.shipSize.h << ", " << endl;
}
