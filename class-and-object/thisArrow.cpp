#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    double gpa;

    Student(int roll, double gpa) {
        this->roll = roll;
        this->gpa = gpa;
    }
};

int main() {
    Student rahim(42, 5.00);

    cout << rahim.roll << rahim.gpa << endl;

    return 0;
}