#include <bits/stdc++.h>
using namespace std;


// 1
// 5 6
// 4 1 3 1 4

// INCOMPLETE


int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n, sum;
        cin >> n >> sum;

        int arr[n];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        sort(arr, arr+n);

        bool isPossible = false;
        int arrSum = 0;
        int count = 0;

        for(int j = 0; j < n; j++) {
            arrSum += arr[j];
            count += 1;

            if(arrSum == sum && count >= 3) {
                isPossible = true;
                break;
            }
        }


        if(isPossible) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}