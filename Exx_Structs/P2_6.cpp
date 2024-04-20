#include <iostream>
using namespace std;

struct Point
{
    int x, y;
};

struct Rect
{
    int x, y, w, h;

    bool contains(const Point p)
    {
        if((p.x >= x - w) && (p.y >= y - h) && p.x <= x && p.y <= y)
            return true;
        return false;
    }
};

struct Ship
{
    Rect r;
    string id;
    double dx, dy;

    void move()
    {
        r.x += dx;
        r.y += dy;
    }
};

void display(const Ship& ship)
{
    cout << "so hieu: " << ship.id << endl;
    cout << "Toa do: " << ship.r.x << " " << ship.r.y << endl;
}
