#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int cls;
    char section;
    int id;
    int mathMarks;
    int engMarks;
};

bool cmp(Student left, Student right) {
    // if(left.engMarks == right.engMarks) {
    //     return left.mathMarks > right.mathMarks;
    // }
    // else if(left.mathMarks == right.mathMarks) {
    //     return left.id < right.id;
    // }
    // else {
    //     return left.engMarks > right.engMarks;
    // }


    if(left.engMarks > right.engMarks) {
        return true;
    }
    else if(left.engMarks < right.engMarks) {
        return false;
    }
    else {
        if(left.mathMarks > right.mathMarks) {
            return true;
        }
        else if(left.mathMarks < right.mathMarks) {
            return false;
        }
        else {
            return left.id < right.id;
        }
    }
}

int main() {
    int n;
    cin >> n;

    Student arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].mathMarks >> arr[i].engMarks;
    }

    sort(arr, arr+n, cmp);

    for(int i = 0; i < n; i++) {
        cout << arr[i].name <<  " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].mathMarks << " " << arr[i].engMarks << endl;
    }

    return 0;
}