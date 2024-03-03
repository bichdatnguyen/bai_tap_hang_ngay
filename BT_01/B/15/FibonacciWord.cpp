#include<iostream>
using namespace std;

string fibonacciWord(int n)
{
    if(n == 0) return "a";
    else if(n == 1) return "b";
    return fibonacciWord(n-1) + fibonacciWord(n-2);
}

int main()
{
    for(int i=0; i<=10; i++)
        cout << fibonacciWord(i) << endl;
    return 0;
}
