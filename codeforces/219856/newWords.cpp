// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    //lower
    for(int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    //transform::: transform(s.begin(), s.end(), s.begin(), :: tolower)

    int freq[26] = {0};

    for(int i = 0; i < s.size(); i++) {
        char ch = s[i];
        int index = s[i] - 'a';

        freq[index]++;
    }

    int sets = min({freq['e' - 'a'], freq['g' - 'a'], freq['y' - 'a'], freq['p' - 'a'], freq['t' - 'a']});

    cout << sets << endl;

    return 0;
}