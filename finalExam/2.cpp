#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;

    bool jessicaMissing = true;
    while(ss >> word) {
        int pos = str.find("Jessica");
        int len = word.size();

        // cout << word << endl;
        // cout << len << endl;
        // cout << str[pos+8] << endl;
        
        if(pos != -1 && len == 7) {
            jessicaMissing = false;
            break;
        }
        else {
            jessicaMissing = true;
        }
    }

    if(jessicaMissing) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }

    return 0;
}