#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "hello";
    s = "Gello";
    s += "Bye"; // appends
    s.append("Bi");  //appends
    s.push_back('e');   // add character at the last index
    s.pop_back();   // removes the last index character

    s = "Hello world";
    //s.erase(5); //from index 5, it will delete the rest
    s.erase(3, 2); // 2 means from 3 how many characters will get deleted

    s = "Hello World";
    s.replace(6, 5, "Bangladesh"); // index, how many delete, replacement string

    s.insert(5, "Pias");


    cout << s << endl;
    return 0;
}