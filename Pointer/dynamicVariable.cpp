#include <bits/stdc++.h>
using namespace std;

// -----Static Variable-------
// int *p;

// void fun() {
//     int x = 10;
//     p = &x;
//     cout << "FUN ->" << *p << endl;
//     return;
// }

// int main() {
//     fun();
//     cout << "MAIN ->" << *p << endl;
// }


int *p;

void fun() {
    int *x = new int;
    *x = 10;
    p = x;
    cout << "FUN -> " << *p << endl;
    return;
}

int main() {
    fun();
    cout << "MAIN -> " << *p << endl;
}