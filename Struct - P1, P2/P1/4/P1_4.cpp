#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
    void printInfo() {
        cout << age << " " << first_name << " " << last_name << " " << standard << endl;
    }
};

int main() {
    Student A;
    cin >> A.age >> A.first_name >> A.last_name >> A.standard;
    A.printInfo();
    return 0;
}
