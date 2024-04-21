#include <iostream>
#include <cstring>
using namespace std;

char* concat(const char* s1, const char* s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int len = len1 + len2;
    char* result  = new char[len + 1];
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

/*
int main()
{
    cout << concat("Hello ", "World") << endl;
    return 0;
}
*/
