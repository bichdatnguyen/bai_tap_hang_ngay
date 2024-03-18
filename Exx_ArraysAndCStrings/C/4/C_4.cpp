#include<iostream>
using namespace std;

const int MAXN = 15;

bool inside(int x, int y, int m, int n)
{
    if(x >= 0 && y >= 0 && x < m && y < n)
        return true;
    return false;
}

int main()
{
    int m, n;
    cin >> m >> n;
    char a[MAXN][MAXN];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    int mineMap[MAXN][MAXN];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(a[i][j] == '*')
                mineMap[i][j] = -1;
            else
                mineMap[i][j] = 0;
        }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(a[i][j] == '*') {
                if(inside(i-1, j-1, m, n) && mineMap[i-1][j-1] != -1) mineMap[i-1][j-1]++;
                if(inside(i-1, j, m, n) && mineMap[i-1][j] != -1) mineMap[i-1][j]++;
                if(inside(i-1, j+1, m, n) && mineMap[i-1][j+1] != -1) mineMap[i-1][j+1]++;
                if(inside(i, j-1, m, n) && mineMap[i][j-1] != -1) mineMap[i][j-1]++;
                if(inside(i, j+1, m, n) && mineMap[i][j+1] != -1) mineMap[i][j+1]++;
                if(inside(i+1, j-1, m, n) && mineMap[i+1][j-1] != -1) mineMap[i+1][j-1]++;
                if(inside(i+1, j, m, n) && mineMap[i+1][j] != -1) mineMap[i+1][j]++;
                if(inside(i+1, j+1, m, n) && mineMap[i+1][j+1] != -1) mineMap[i+1][j+1]++;
            }
        }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(mineMap[i][j] == -1) cout << '*' << " ";
            else cout << mineMap[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
