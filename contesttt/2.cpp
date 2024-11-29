#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n == 7 || n == 14 || n == 21 || n == 28 || n == 6 || n == 13 || n == 20 || n == 27) {
        cout << "YAPPY!" << endl;
    }
    else {
        cout << "Oh no!" << endl;
    }
    return 0;
}