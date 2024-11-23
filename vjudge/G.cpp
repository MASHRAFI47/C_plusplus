#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        char str[1001], str2[1001];
        cin >> str >> str2;

        bool anagram = true;

        int firstLen = strlen(str);
        int secondLen = strlen(str2);

        sort(str, str+firstLen);
        sort(str2, str2+secondLen);

        if(firstLen != secondLen) {
            anagram = false;
        }
        else {
            for(int i = 0; i < firstLen; i++) {
                if(str[i] != str2[i]) {
                    anagram = false;
                    break;
                }
            }
        }

        if(anagram) {
            cout << "True" << endl;
        }
        else {
            cout << "False" << endl;
        }
    }

    return 0;
}