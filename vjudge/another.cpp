// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long int x,y;
//     cin >> x >> y;

//     long long int count = 0;

//     for(int i = 0; x > 0; i++) {
//         x = x - y;
//         count++;
//     }

//     cout << count << endl;

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    long long value;
    if(x%y == 0) {
        value = x / y;
    }
    else {
        value = (x / y) + 1;
    }

    cout << value << endl;

    return 0;
}