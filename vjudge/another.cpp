#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x,y;
    cin >> x >> y;

    long long int count = 0;

    for(int i = 0; x > 0; i++) {
        x = x - y;
        count++;
    }

    cout << count << endl;

    return 0;
}