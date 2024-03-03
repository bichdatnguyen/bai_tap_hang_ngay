#include<iostream>
using namespace std;

bool LeapYear(int n)
{
    if(n % 100 == 0 && n % 400 == 0) return true;
    else if(n % 4 == 0) return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << (LeapYear(n) ? "true" : "false") << endl;
    return 0;
}
