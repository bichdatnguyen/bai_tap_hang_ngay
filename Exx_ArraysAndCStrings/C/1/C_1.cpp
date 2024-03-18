#include<iostream>
using namespace std;

const int MAXN = 10005;

int main()
{
    int n;
    cin >> n;
    int a[MAXN];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int cnt[MAXN] = {0};
    bool exist = false;
    for(int i=0; i<n; i++) {
        cnt[a[i]]++;
        if(cnt[a[i]] == 2) {
            cout << "Yes" << endl;
            exist = true;
            break;
        }
    }
    if(!exist) cout << "No" << endl;
    return 0;
}
