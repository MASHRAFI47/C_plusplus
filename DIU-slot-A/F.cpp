#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int arr[n];
    int arr2[n]; 

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    int mn = INT_MAX;

    bool possible = false;
    for(int i = 0; i < n; i++) {
        if(arr2[i] >= x) {
            mn = min(arr[i], mn);
            possible = true;
        }
    }

    if(possible) {
        cout << mn << endl;
    }
    else {
        cout << "Bad Luck!" << endl;
    }

    return 0;
}