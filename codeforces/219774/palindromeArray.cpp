// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;

    for(int i = 0, j = n - 1; i <= j; i++, j--) {
        if(arr[i] != arr[j]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}