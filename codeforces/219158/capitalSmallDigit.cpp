// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char ch;
    cin >> ch;
 
    int ascii = (int)ch;
    if(ascii >= 48 && ascii <= 64) {
        cout << "IS DIGIT" << endl;
    }
 
    if(ascii >= 65) {
        cout << "ALPHA" << endl;
        if(ascii >= 65 && ascii <= 96) {
            cout << "IS CAPITAL" << endl;
        }
        else if(ascii >= 97) {
            cout << "IS SMALL" << endl;
        }
    }
 
    return 0;
}