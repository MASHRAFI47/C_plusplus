#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long arr[n];

    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maximum = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] <= n) {
            if(arr[i] > maximum) {
                maximum = arr[i];
            }
        }
    }

    cout << maximum << endl;

    return 0;
}