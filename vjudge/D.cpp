#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maximum = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) {
            maximum = max(arr[i], maximum);
        }
        else {
            break;
        }
    }

    cout << maximum << endl;

    return 0;
}