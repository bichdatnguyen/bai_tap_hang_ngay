#include<iostream>
using namespace std;

const int MAXN = 10005;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    bool palindrome = true;
    for(int i=0; i<l; i++) {
        if(s[i] != s[l-i-1]) {
            palindrome = false;
            break;
        }
    }
    cout << (palindrome ? "Yes" : "No") << endl;
    return 0;
}
