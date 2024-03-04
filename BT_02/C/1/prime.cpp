#include<iostream>
#include<math.h>
using namespace std;

bool prime(int n)
{
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << (prime(n) ? "yes" : "no") << endl;
    return 0;
}
