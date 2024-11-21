#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[1000];
    cin.getline(str, 1000);

    int len = strlen(str);

    sort(str, str+len);

    for(int i = 0; i < len; i++) {
        if(str[i] != 32) {
            cout << str[i];
        }
    }

    return 0;
}