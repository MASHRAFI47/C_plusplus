#include <bits/stdc++.h>
using namespace std;

class Student {
    public: 
    char name[100];
    int roll;
    double gpa;
};

int main() {
    Student a;
    a.roll = 51;
    a.gpa = 5.00;
    char temp[100] = "Mashrafi";
    strcpy(a.name, temp);

    return 0;
}