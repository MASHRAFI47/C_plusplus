#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[1000];
    int roll;
    int marks;
};

int main() {
    int n;
    cin >> n;
    cin.ignore();

    Student arr[n];

    for(int i = 0; i < n; i++) {
        cin.getline(arr[i].name, 1000);
        cin >> arr[i].roll >> arr[i].marks;
        cin.ignore();
    }

    Student maxMarksStudent = arr[0];

    for(int i = 0; i < n; i++) {
        if(arr[i].marks > maxMarksStudent.marks) {
            maxMarksStudent = arr[i];
        }
    }

    cout << maxMarksStudent.name << " " << maxMarksStudent.marks << endl;

    return 0;
}