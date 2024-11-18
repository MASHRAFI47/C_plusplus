// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

#include <bits/stdc++.h>
using namespace std;

long long sum(long long x, long long y) {
    long long sum = x + y;
    return sum;
}

long long mult(long long x, long long y) {
    long long mult = x * y;
    return mult;
}

long long sub(long long x, long long y) {
    long long sub = x - y;
    return sub;
}


int main() {
    long long x, y;
    cin >> x >> y;

    long long summation = sum(x, y);
    long long multiplication = mult(x, y);
    long long substraction = sub(x, y);

    cout << x << " + " << y << " = " << summation << endl;
    cout << x << " * " << y << " = " << multiplication << endl;
    cout << x << " - " << y << " = " << substraction << endl;

    return 0;
}