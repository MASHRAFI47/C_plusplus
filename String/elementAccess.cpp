#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    s = "Hello world";

    cout << s[0] << endl;
    cout << s.at(0) << endl; // prints the index value
    cout << s.back() << endl; // prints the last index of the string
    cout << s.front() << endl;  // prints the first index of the string

    return 0;
}