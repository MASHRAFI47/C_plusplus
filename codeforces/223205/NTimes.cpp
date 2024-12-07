#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        char ch;

        cin >> n >> ch;

        string s(n, ch);

        cout << s[0];
        for(int i = 1; i < n; i++) {
            cout << " " << s[i];
        }
        cout << endl;
    }
    return 0;
}