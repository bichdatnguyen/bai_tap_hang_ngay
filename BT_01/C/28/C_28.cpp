#include<iostream>
using namespace std;

int main()
{
    int i = 12;
    bool Night = true;
    while(true) {
        if(i == 12 && Night) {
            cout << i << " midnight" << endl;
            i = 1;
            Night = false;
            continue;
        }
        if(i == 12 && !Night) {
            cout << i << " noon" << endl;
            i = 1;
            Night = true;
            continue;
        }
        if(i <= 11 && Night) {
            cout << i << "pm" << endl;
            if(i == 11) break;
            i++;
            continue;
        }
        if(i <= 11 && !Night) {
            cout << i << "am" << endl;
            i++;
            continue;
        }
    }
    return 0;
}
