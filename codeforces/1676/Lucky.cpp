#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int len = s.size();

        int firstSum = 0;
        firstSum = s[0] - '0' + s[1] - '0' + s[2] - '0';

        int secondSum = 0;
        secondSum = s[len - 1] - '0' + s[len - 2] - '0' + s[len - 3] - '0';

        if(firstSum == secondSum) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}