// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int arr[n+1]; //because array index starts from 1;

        int minimum = INT_MAX;

        for(int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i == j || i > j) {
                    continue;
                }

                int sum = 0;
                sum = arr[i] + arr[j] + j - i;

                minimum = min(sum, minimum);
                
            }
        }

        cout << minimum << endl;
    }

    return 0;
}