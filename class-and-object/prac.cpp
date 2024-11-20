#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    double gpa;

    Student(int r, double g) {
        roll = r;
        gpa = g;
    }
};

Student *fun() {
    Student karim(2, 5.00);
    Student *p = &karim;
    return p;
}

int main() {
    Student *p = fun();

    cout << p->roll << " " << p->gpa << endl;

    return 0;
}