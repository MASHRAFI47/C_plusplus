#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[1000];
    char section;
    int id;
    int marks;
};

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        Student arr[3];

        for(int i = 0; i < 3; i++) {
            cin >> arr[i].id >> arr[i].name >> arr[i].section >> arr[i].marks;
        }

        Student maxMarks = arr[0];
        for(int i = 0; i < 3; i++) {
            // cout << arr[i].id << " " << arr[i].name << " " << arr[i].section << " " << arr[i].marks << endl;
            if(arr[i].marks > maxMarks.marks) {
                maxMarks = arr[i];
            }
            
            // if(maxMarks.id < arr[i].id && maxMarks.marks == arr[i].marks) {
            //     maxMarks = arr[i-1];
            // } 
        }

        cout << maxMarks.id << " " << maxMarks.name << " " << maxMarks.section << " " << maxMarks.marks << endl;
    }

    return 0;
}