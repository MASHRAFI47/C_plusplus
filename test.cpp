#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int *arr2 = new int(m);

    for(int i = 5; i < 10; i++) {
        cin >> arr2[i];
    }

    for(int i = 0; i < n; i++) {
        arr2[i] = arr[i];
    }

    for(int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}