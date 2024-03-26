#include <iostream>
using namespace std;

const int MAXN = 100005;

int main()
{
    int n;
    cin >> n;
    int a[MAXN];
    for(int i=0; i<n; i++) cin >> a[i];
    int minn = 9999999;
    int maxn = -9999999;
    int sumEven = 0;
    int cntOdd = 0;
    for(int i=0; i<n; i++) {
        if(a[i] < minn) minn = a[i];
        if(a[i] > maxn) maxn = a[i];
        if(a[i] % 2 == 0) sumEven += a[i];
        else cntOdd++;
    }
    cout << minn << endl << maxn << endl << sumEven << endl << cntOdd << endl;
    return 0;
}
