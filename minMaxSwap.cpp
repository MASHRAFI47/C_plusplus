#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // if(x < y) {
    //     cout << x << endl;
    // }
    // else {
    //     cout << y << endl;
    // }

    cout << min(x, y) << endl;  //min function
    cout << max(x, y) << endl; // max function

    // cout << max({2, 5, 10, 1, 8}) << endl;

    swap(x, y);

    cout << x << " " << y << endl;
}