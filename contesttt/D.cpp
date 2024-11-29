#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int arr[n];

        for(int j = 0; j < n; j++) {
            cin >> arr[i];
        }

        int freq[100000] = {0};
        for(int j = 0; j < n; j++) {
            freq[arr[i]]++;
        }

        int count = 0;
        int index;
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(arr[j] == arr[k]) {
                    cout << arr[k] << endl;
                    count++;
                    j = k++;
                    index = k;
                    // index = k;
                }
            }
        }
        // cout << index << endl;
        cout << count << endl;
    }

    return 0;
}