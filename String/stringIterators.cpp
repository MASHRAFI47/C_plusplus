#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello world";

    // for(int i = 0; i < s.size(); i++) {
    //     cout << s[i] << " ";
    // }

    // for(string:: iterator it = s.begin(); it < s.end(); it++) {
    //     cout << *it << " ";
    // }

    for(auto it = s.begin(); it < s.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}