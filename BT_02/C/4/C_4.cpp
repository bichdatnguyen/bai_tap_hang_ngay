#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space = 0;
    int star = 2*n-1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<space; j++) cout << ' ';
        for(int j=0; j<star; j++) cout << '*';
        cout << endl;
        space++;
        star-=2;
    }
    return 0;
}
