#include <iostream>
using namespace std;

const int MAXN = 100005;

int main()
{
    int n;
    cin >> n;
    int cnt[10];
    fill_n(cnt, n, 0);
    int a[MAXN];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cnt[a[i]]++;
    for(int i=0; i<10; i++)
        cout << cnt[i] << ' ';
    return 0;
}
