#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << ((x == y && y == z) ? "true" : "false") << endl;
    return 0;
}
