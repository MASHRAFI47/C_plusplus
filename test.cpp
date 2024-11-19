#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    double gpa;
    int roll;
};

int main() {
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore();

    cout << a.name << " " << a.roll << " " << fixed << setprecision(2) << a.gpa << endl;

    return 0;
}