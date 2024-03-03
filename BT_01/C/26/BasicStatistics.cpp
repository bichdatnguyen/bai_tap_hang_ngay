#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxx = -999999999;
    int minn = 999999999;
    while(n--) {
        int x;
        cin >> x;
        if(x > maxx) maxx = x;
        if(x < minn) minn = x;
    }
    cout << "Mean: " << (double) (maxx + minn) / 2 << endl;
    cout << "Max: " << maxx << endl;
    cout << "Min: " << minn << endl;
    return 0;
}
