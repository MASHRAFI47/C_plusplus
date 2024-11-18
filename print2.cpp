#include<iostream>
using namespace std;

int main() {
    int x = 10;
    char c = 'A';
    double d = 43.51;
    int ascii = c;

    cout << x << " " << c << " " << d << endl;
    cout << "My fav number is " << x << endl;
    cout << ascii << endl;

    // type casting
    cout << (int)c << endl;

    return 0;
}