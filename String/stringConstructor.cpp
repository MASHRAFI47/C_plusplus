#include <bits/stdc++.h>
using namespace std;

int main() {
    //1
    string a = "Hello world";
    cout << a << endl; //Hello world

    //2
    string b("Hello WORLD");
    cout << b << endl; // Hello WORLD

    //3
    string c("Hello World", 4);
    cout << c << endl; // Hell

    //4
    string d = "Hello World";
    string e(d, 4);
    cout << e << endl; // o World

    //5 
    string s(5, 'A'); 
    cout << s << endl; // AAAAA

    return 0;
}