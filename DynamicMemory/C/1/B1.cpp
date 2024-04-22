#include <iostream>
#include <cstring>
using namespace std;

char* reverse(const char* a)
{
    int len = strlen(a);
    char* r = new char[len + 1];
    for(int i=0; i<len; i++) {
        r[i] = a[len - i - 1];
    }
    return r;
}

char* delete_char(const char* a, const char c)
{
    int len = 0;
    int n = strlen(a);
    char* r = new char[n + 1];
    for(int i=0; i<n; i++) {
        if(a[i] == c) continue;
        r[len] = a[i];
        len++;
    }
    return r;
}

char* pad_right(char* a, const int n)
{
    int len = strlen(a);
    char* r = new char[n + 1];
    strcpy(r, a);
    if(len >= n)
        return r;

    for(int i=0; i<len; i++) r[i] = a[i];
    for(int i=len; i<n; i++) {
        r[i] = ' ';
    }
    return r;
}

char* pad_left(const char* a, const int n)
{
    int len = strlen(a);
    char* r = new char[n + 1];
    strcpy(r, a);
    if(len >= n)
        return r;

    for(int i=0; i<len; i++) r[i] = ' ';
    for(int i=len; i<n; i++) {
        r[i] = a[i - len];
    }
    return r;
}

char* truncate(const char* a, const int n)
{
    int len = strlen(a);
    char* r = new char[min(len, n) + 1];
    for(int i=0; i<min(len, n); i++) {
        r[i] = a[i];
    }
    return r;
}

char* trim_left(const char* a)
{
    int len = strlen(a);
    int cnt = 0;
    for(int i=0; i<len; i++) {
        if(a[i] == ' ') cnt++;
        else break;
    }
    char* r = new char[len - cnt + 1];
    for(int i=0; i<(len - cnt); i++) {
        r[i] = a[i + cnt];
    }
    return r;
}

char* trim_right(const char* a)
{
    int len = strlen(a);
    int cnt = 0;
    for(int i=len-1; i>=0; i--) {
        if(a[i] == ' ') cnt++;
        else break;
    }
    char* r = new char[len - cnt + 1];
    for(int i=0; i<(len - cnt); i++) {
        r[i] = a[i];
    }
    return r;
}

int main()
{
    cout << reverse("Hello") << endl;
    cout << delete_char("Hello", 'l') << endl;
    cout << delete_char("Hello", 'a') << endl;
    cout << pad_right("Hello", 5) << pad_left("Hello", 10) << endl;
    cout << truncate("Hello", 3) << endl;
    cout << trim_left("      He   llo") << " " << trim_right("Hel lo       ") << endl;
    return 0;
}
