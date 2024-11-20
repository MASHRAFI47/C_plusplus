#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    double gpa;

    Student(int r, double g) { //constructor
        roll = r;
        gpa = g;
    }
};

int main() {
    Student rahim(42, 4.00);

    cout << rahim.roll << " " << fixed << setprecision(2) << rahim.gpa;

    return 0;
}