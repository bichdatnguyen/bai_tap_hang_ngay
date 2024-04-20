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
