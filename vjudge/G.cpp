#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        char str[1000], str2[1000];
        cin >> str >> str2;

        bool isPermute = true;

        int firstStrLen = strlen(str);
        int secondStrLen = strlen(str2);

        if(firstStrLen != secondStrLen) {
            isPermute = false;
        }

        else {
            for(int i = 0; i < firstStrLen; i++) {
                for(int j = 0; j < firstStrLen; j++) {
                    if(str[i] == str2[j]) {
                        isPermute = true;
                        break;
                    }
                    else {
                        isPermute = false;
                        break;
                    }

                    // cout << str[i] << " " << str2[j] << endl;
                }
            }
        }


        if(isPermute) {
            cout << "True" << endl;
        }
        else {
            cout << "False" << endl;
        }
        
    }
    return 0;
}