#include <iostream>
using namespace std;

const int MAXN = 100005;

bool isPalindrome(int n)
{
    int m = n;
    int p = 0;
    while(n > 0) {
        int d = n % 10;
        p = p * 10 + d;
        n /= 10;
    }
    if(p == m) return true;
    return false;
}

int main()
{
    bool palindrome[MAXN];
    for(int i=0; i<MAXN; i++) {
        if(isPalindrome(i)) palindrome[i] = true;
        else palindrome[i] = false;
    }
    int cnt[MAXN];
    cnt[0] = 1;
    for(int i=1; i<MAXN; i++) {
        if(palindrome[i]) cnt[i] = cnt[i-1] + 1;
        else cnt[i] = cnt[i-1];
    }
    int T;
    cin >> T;
    while(T--) {
        int a, b;
        cin >> a >> b;
        if(a == 0) cout << cnt[b] << endl;
        else  cout << cnt[b] - cnt[a-1] << endl;
    }
    return 0;
}
