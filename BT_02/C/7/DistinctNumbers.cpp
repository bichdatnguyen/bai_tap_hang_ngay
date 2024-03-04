#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    int len = 0;
    vector<int> finalArray;
    while(true)
    {
        int n;
        cin >> n;
        if(len == 0) {
            finalArray.push_back(n);
            len++;
        }
        else {
            if(n == finalArray[len - 1]) continue;
            else {
                finalArray.push_back(n);
                len++;
            }
        }
        if(n < 0) break;
    }
    for(int i=0; i<len; i++) cout << finalArray[i] << " ";
    return 0;
}
