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
    Student *karim = new Student(5, 4.00);
    return karim;
}

int main() {
    Student *p = fun();

    cout << p->roll << " " << fixed << setprecision(2) << p->gpa << endl;

    return 0;
}