// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        if(s.find("101") != -1) {
            cout << "Good" << endl;
        }
        else if(s.find("010") != -1) {
            cout << "Good" << endl;
        }
        else {
            cout << "Bad" << endl;
        }
    }

    return 0;
}