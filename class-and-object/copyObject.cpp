#include <bits/stdc++.h>
using namespace std;

class Cricketer {
    public:
    string country;
    int jersey;

    Cricketer(string country, int jersey) {
        this->country = country;
        this->jersey = jersey;
    }
};

int main() {
    Cricketer* dhoni = new Cricketer("dhoni", 100);
    Cricketer* raina = new Cricketer("raina", 90);

    *raina = *dhoni;

    delete dhoni;

    cout << raina->jersey << " " << raina->country << endl;

    return 0;
}