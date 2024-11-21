
#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    int jersey_no;
    string country;
};

int main() {
    // Create a dynamic object named dhoni
    Cricketer* dhoni = new Cricketer;

    // Fill the data for dhoni
    dhoni->jersey_no = 7;
    dhoni->country = "India";

    // Create another dynamic object named kohli
    Cricketer* kohli = new Cricketer;

    // Try direct assignment
    // kohli = dhoni; // Uncomment to test, but it will just copy the pointer, not the data.

    // Copy the data manually
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    // Delete the dhoni object
    delete dhoni;

    // Print the data of kohli
    cout << "Kohli's Jersey No: " << kohli->jersey_no << endl;
    cout << "Kohli's Country: " << kohli->country << endl;

    // Delete the kohli object to free memory
    delete kohli;

    return 0;
}
