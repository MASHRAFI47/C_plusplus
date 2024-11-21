// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    char ch;

    cin >> x >> ch >> y;

    bool isCorrect;

    if(ch == '>') {
        isCorrect = x > y;
    }
    else if(ch == '<') {
        isCorrect = x < y;
    }
    else if(ch == '=') {
        isCorrect = x == y;
    }

    if(isCorrect) {
        cout << "Right" << endl;
    }
    else {
        cout << "Wrong" << endl;
    }
    
    return 0;
}