#include <iostream>
using namespace std;

struct Point
{
    int x, y;
};

int main()
{
    Point p;
    cin >> p.x >> p.y;
    cout << &p.x << " " << &p.y << endl;
    // 0x61fe18 0x61fe1c
    // nhan xet: dia chi cua p.y sau p.x, du thay doi gia tri cua p.x va p.y nhung dia chi khong doi
    return 0;
}
