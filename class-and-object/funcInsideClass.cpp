#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int englishMarks;
    int mathMarks;

    Student(string name, int roll, int englishMarks, int mathMarks) {
        this->name = name;
        this->roll = roll;
        this->englishMarks = englishMarks;
        this->mathMarks = mathMarks;
    }

    void total() {
        cout << name << " got total of " << englishMarks+mathMarks << endl;
    }
};

int main() {
    Student mashrafi("Mashrafi Bin Nur", 5, 99, 100);
    mashrafi.total(); // Mashrafi Bin Nur got total of 199
    Student Rakib("Rakib Ahmed", 25, 66, 89);
    Rakib.total(); // Rakib Ahmed got total of 155
    return 0;
}