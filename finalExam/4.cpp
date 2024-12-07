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
    return ((left.engMarks+left.mathMarks) == (right.engMarks+right.mathMarks)) ? left.id < right.id : (left.engMarks+left.mathMarks) > (right.engMarks+right.mathMarks);
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
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].mathMarks << " " << arr[i].engMarks << endl;
    }

    return 0;
}