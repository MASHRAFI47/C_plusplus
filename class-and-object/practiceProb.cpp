#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;


    Student(char* n, int r, char s, int m, int c) {
        strcpy(name, n); // Copy the name into the char array
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main() {

    Student student1("Alice", 1, 'A', 85, 10);
    Student student2("Bob", 2, 'B', 90, 10);
    Student student3("Charlie", 3, 'A', 88, 10);


    Student* highest = &student1;

    if (student2.math_marks > highest->math_marks) {
        highest = &student2;
    }
    if (student3.math_marks > highest->math_marks) {
        highest = &student3;
    }


    cout << "The student with the highest math marks is: " << highest->name << endl;

    return 0;
}
