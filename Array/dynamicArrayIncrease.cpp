#include <bits/stdc++.h>
using namespace std;

int main() {
    int *a = new int[3];

    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int *b = new int[5];
    for(int i = 0; i < 3; i++) {
        b[i] = a[i];
    }

    b[3] = 10;
    b[4] = 20;

    delete[] a; // deletes the a array;

    for(int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }

    return 0;
}