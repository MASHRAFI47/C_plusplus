#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int marks;
    int roll;
};

bool comp(Student l, Student r) {
    if(l.marks == r.marks) {
        return l.roll < r.roll;
    }
    else {
        return l.marks > r.marks;
    }
}

int main() {
    int n;
    cin >> n;

    Student arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].marks >> arr[i].roll;
    }

    sort(arr, arr+n, comp);

    for(int i = 0; i < n; i++) {
        cout << arr[i].name << " " << arr[i].marks << " " << arr[i].roll << endl;
    }

    return 0;
}