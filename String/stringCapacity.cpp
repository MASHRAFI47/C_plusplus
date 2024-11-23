#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello";
    s = "I am mashrafi";

    cout << s.size() << endl; // returns the size of the string;
    cout << s.max_size() << endl; // returns the maximum size string the compiler can handle (not used)
    cout << s.capacity() << endl; // returns current available capacity of the string. Basically it is dynamic (not used)

    s.resize(16, 'x'); // resize the string;

    //s.clear(); // clears the whole string;
    cout << s << endl;

    if(s.empty()) {
        cout << "Empty String" << endl;
    }
    else {
        cout << "Not Empty" << endl;
    }

    return 0;
}