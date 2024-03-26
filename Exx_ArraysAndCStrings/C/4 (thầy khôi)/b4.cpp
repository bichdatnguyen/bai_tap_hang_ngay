#include <bits/stdc++.h>
using namespace std;

const int MAXN = 22;

int main()
{
    int C[MAXN][MAXN];
    for(int i=0; i<MAXN; i++)
        for(int j=0; j<MAXN; j++)
            C[i][j] = 0;
    C[0][0] = 1;
    C[0][1] = 1;
    C[1][1] = 1;
    for(int i=2; i<MAXN; i++) {
        for(int j=0; j<=i; j++) {
            if(j == 0 || j == i) C[j][i] = 1;
            else C[j][i] = C[j-1][i-1] + C[j][i-1];
        }
    }
    for(int i=0; i<MAXN; i++) {
        for(int j=0; j<=i; j++) {
            cout << C[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
