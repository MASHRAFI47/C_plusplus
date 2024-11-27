#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int freq[27] = {0};

        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];
            int digit = ch - 'A';
            freq[digit]++;
        }

        int count = 0;
        for(int i = 0; i < 27; i++) {
            if(freq[i] == 1) {
                count += 2;
            }
            else if(freq[i] > 1) {
                count = count + (freq[i] + 1);
            }
        }

        cout << count << endl;
    }

    return 0;
}