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

void init(Ship &ship)
{
    cin >> ship.r.x >> ship.r.y >> ship.id >> ship.dx >> ship.dy;
}

int main()
{
    Ship ship1, ship2;
    init(ship1);
    init(ship2);
    int loop = 1;
    while (loop < 10) {
        ship1.move(); ship2.move();
        display(ship1); display(ship2);
        loop++;
    }
    return 0;
}
